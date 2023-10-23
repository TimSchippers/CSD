import time as t
import simpleaudio as sa

from functions import *

# ___________Variables
bpm = 120
time_signature = '4/4'
number_of_beats = 4
note_value_of_beat = 4
modifier = 1
sequence = []
sum = 0



bpm = bpm_input(bpm)
time_signature = time_signature_input(time_signature)




print(number_of_beats)
print(note_value_of_beat)


beat_duration = 60/bpm # calculates the beat duration from the given time signature with the modifier
time_measure = beat_duration * number_of_beats



while sum < time_measure:
    sequence.append(sum)
    sum += (beat_duration/modifier)
