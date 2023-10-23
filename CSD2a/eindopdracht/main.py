import time as t
import random as r

import simpleaudio as sa

from gui import *

# ___________Variables
bpm = 120
time_signature = '4/4'

bpm = bpm_input(bpm)
time_signature, number_of_beats, note_value_of_beat = time_signature_input(time_signature)
beat_duration = 60/bpm # calculates the beat duration from the given time signature with the modifier
measure_duration = beat_duration*number_of_beats

samples = {}
samples["kick"] = sa.WaveObject.from_wave_file("./resources/Kick.wav")
samples["snare"] = sa.WaveObject.from_wave_file("./resources/Snare.wav")
samples["hi_hat"] = sa.WaveObject.from_wave_file("./resources/Hi_Hat.wav")





#  Create track
#new_track = True
#while new_track:
    # i = 0
modifier = modifier_input(1,note_value_of_beat)
phase = between_input(0,20,100,"phase")
probability = between_input(100,0,100,"probability")
print(modifier,phase,probability)

ts_sequence = []
sum = phase
while (sum < measure_duration):
    chance = r.random() * 100
    if (chance < probability):
        ts_sequence.append(sum)
    sum += beat_duration / modifier






# new_track = True
# while new_track:
    # yes_no = input("Do you want a new track?\n y/n: ")
    # if (yes_no == "n"):
    #     print("nonewtrack")
    #     break
    # elif(yes_no == "y"):
    #     print("new track")
    #     break
