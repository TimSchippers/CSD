import random as r

from gui import *

def create_events(ts_seq, sample_id):
    events = []
    for ts in ts_seq:
        events.append({"ts": ts, "sample_id": sample_id})
    return events

def get_number(event):
    return event["track_number"]

def make_timestamp_sequence(beat_duration,measure_duration,modifier,phase,probability):
    ts_sequence = []
    sum = beat_duration/modifier*(phase/100)
    while (sum < measure_duration):
        chance = r.random() * 100
        if (chance < probability):
            ts_sequence.append(sum)
        sum += beat_duration / modifier
    return ts_sequence

def make_track(track_number,beat_duration,measure_duration,note_value_of_beat):
    track = {}
    track["track_number"] = track_number
    track["track_name"] = input("what would you name this track? : ")
    track["beat_duration"]= beat_duration
    track["measure_duration"]= measure_duration
    track["modifier"] = modifier_input(1,note_value_of_beat)
    track["phase"] = between_input(0,0,100,"phase")
    track["probability"] = between_input(100,0,100,"probability")
    track["ts_seq"] = make_timestamp_sequence(track["beat_duration"],track["measure_duration"],track["modifier"],track["phase"],track["probability"])
    return track
