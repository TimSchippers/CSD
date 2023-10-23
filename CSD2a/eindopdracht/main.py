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



tracks = []
# Create track
new_track = True

while new_track:
    number = len(tracks)
    track = make_track(number, beat_duration, measure_duration, note_value_of_beat)
    tracks.append(track)
    yes_no = input("Do you want a new track?\n y/n: ")
    if (yes_no == "n"):
        print("no new track")
        new_track = False
    elif(yes_no == "y"):
        print("new track")
        continue


for i in tracks:
    print(i)
    j = tracks.pop()
    print(j)






# new_track = True
# while new_track:
    # yes_no = input("Do you want a new track?\n y/n: ")
    # if (yes_no == "n"):
    #     print("nonewtrack")
    #     break
    # elif(yes_no == "y"):
    #     print("new track")
    #     break
