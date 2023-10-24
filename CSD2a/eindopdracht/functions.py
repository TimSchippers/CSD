import random as r

from gui import *

def create_events(ts_seq, sample_id):
    # returns a list of event dictionaries, present it with a list of ts and the sample_id
    events = []
    for ts in ts_seq:
        events.append({"ts": ts, "sample_id": sample_id})
    return events

def get_ts(event):
    return event["ts"]


def make_timestamp_sequence(beat_duration,measure_duration,modifier,phase,probability):
    # calculates the timestamps and put them in a list
    ts_sequence = []
    sum = beat_duration/modifier*(phase/100)
    while (sum < measure_duration):
        chance = r.random() * 100
        if (chance < probability):
            ts_sequence.append(sum)
        sum += beat_duration / modifier
    return ts_sequence

def make_track(track_number,beat_duration,measure_duration,note_value_of_beat):
    # makes a dictionary "track"
    track = {}
    track["track_number"] = track_number
    track["track_name"] = sample_input()
    modifier = modifier_input(1,note_value_of_beat)
    phase = between_input(0,0,100,"phase")
    probability = between_input(100,0,100,"probability")
    track["ts_seq"] = make_timestamp_sequence(beat_duration,measure_duration,modifier,phase,probability)
    track["velocity"] = 80
    track["channel"] = 0
    track["note_duration"] = beat_duration/modifier
    return track

def create_tracks(beat_duration, measure_duration, note_value_of_beat):
    # create any number of dictrionaries/"tracks" and put them in a list
    tracks = []
    new_track = True
    while new_track:
        number = len(tracks)
        track = make_track(number, beat_duration, measure_duration, note_value_of_beat)
        tracks.append(track)
        yes_no = yes_no_input("Do you want a new track?\n y/n: ")
        if (yes_no == "n"):
            print("no new track")
            new_track = False
        elif(yes_no == "y"):
            print("new track")
            continue

    return tracks
