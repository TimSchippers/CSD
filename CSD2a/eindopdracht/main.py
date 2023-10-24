import time as t
import random as r

from midiutil import MIDIFile
import simpleaudio as sa

from gui import *
from functions import *


stored = False
while not stored:
    # user input for bpm and time signature
    bpm = bpm_input(120)
    time_signature, number_of_beats, note_value_of_beat = time_signature_input("4/4")
    beat_duration = 60/bpm # calculates the beat duration from the given time signature with the modifier
    measure_duration = beat_duration*number_of_beats

    #load samples
    samples = {}
    samples["kick"] = sa.WaveObject.from_wave_file("./resources/kick.wav")
    samples["snare"] = sa.WaveObject.from_wave_file("./resources/snare.wav")
    samples["hi_hat"] = sa.WaveObject.from_wave_file("./resources/hi_hat.wav")
    samples["open_hi_hat"] = sa.WaveObject.from_wave_file("./resources/open_hi_hat.wav")

    # create tracks
    tracks = create_tracks(beat_duration,measure_duration,note_value_of_beat)

    # create list of events
    event_seq = []
    for track in tracks:
        event_seq += create_events(track.get("ts_seq"),track.get("track_name"))

    # sort events on timestamp
    event_seq.sort(key=get_ts)

    # playback
    time_zero = t.time()
    play_seq = event_seq.copy()
    event = play_seq.pop(0)
    num_playback_times = int(input("how many measures do you want to hear? :"))
    wait = False

    while num_playback_times:
        now = t.time() - time_zero
        # check if we need to play a sample
        if (now < measure_duration):
            if(now > event["ts"] and wait == False): # play sample when time equals time and waits for next measure if there is no timestamp left
                sample_id = event["sample_id"]
                samples[sample_id].play()
                print(str(event["sample_id"]) + " is now played at" + str(event["ts"]))
                if play_seq:
                    event = play_seq.pop(0)
                else:
                    t.sleep(0.001)
                    wait = True
        else:
            play_seq = event_seq.copy()
            event = play_seq.pop(0)
            num_playback_times -= 1
            time_zero = t.time()
            wait = False




    # ask to store the midi file
    yes_no = yes_no_input("Do you want to store generated beat?\n y/n: ")
    if (yes_no == "n"):
        print("okay, start over then")
        continue
    if (yes_no == "y"):
        print("great")
        mf = MIDIFile(len(tracks))
        track_number = 0
        for track in tracks:
            mf.addTrackName(track_number,0,track.get("track_name"))
            mf.addTempo(track_number,0,bpm)
            for event in track.get("ts_seq"):
                mf.addNote(track_number,0,36,event,track.get("note_duration"),track.get("velocity"))
                # print(track_number,0,track.get("track_name"),36,event,track.get("note_duration"), track.get("velocity"))
            track_number += 1

        with open("sequence.midi","wb") as outf:
            mf.writeFile(outf)
            stored = True
