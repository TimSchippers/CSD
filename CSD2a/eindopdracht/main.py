import time as t
import random as r

import simpleaudio as sa

from gui import *
from functions import *

# ___________Variables
bpm = 120
time_signature = '4/4'

bpm = bpm_input(bpm)
time_signature, number_of_beats, note_value_of_beat = time_signature_input(time_signature)
beat_duration = 60/bpm # calculates the beat duration from the given time signature with the modifier
measure_duration = beat_duration*number_of_beats

samples = {}
samples["kick"] = sa.WaveObject.from_wave_file("./resources/kick.wav")
samples["snare"] = sa.WaveObject.from_wave_file("./resources/snare.wav")
samples["hi_hat"] = sa.WaveObject.from_wave_file("./resources/hi_hat.wav")
samples["open_hi_hat"] = sa.WaveObject.from_wave_file("./resources/open_hi_hat.wav")

samples["snare"].play()

tracks = create_tracks(beat_duration,measure_duration,note_value_of_beat)
event_seq = []
for track in tracks:
    event_seq += create_events(track.get("ts_seq"),track.get("track_name"))

event_seq.sort(key=get_ts)
time_zero = t.time()
play_seq = event_seq.copy()
event = play_seq.pop(0)
num_playback_times = 4
wait = False

while num_playback_times:
    now = t.time() - time_zero
    # check if we need to play a sample
    if (now < measure_duration):
        if(now > event["ts"] and wait == False):

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
