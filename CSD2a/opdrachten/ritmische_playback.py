import simpleaudio as sa
import time as t
from time import sleep

sequence = []
nNotes = int(input('number of notes in loop: '))

print('1 = quarter note, 0.5 = eighth note etc. etc.')

for i in range(nNotes):
    nNoteValue = (input("lenght note " + str(i+1) + " :"))
    sequence.append(float(nNoteValue))

bpm = int(input('bpm: '))
nLoops = int(input('loops: '))

print(sequence) 
print(bpm)
input('Press ENTER to start')


for i in range(len(sequence)*nLoops):
    print('boom')
    wave_obj = sa.WaveObject.from_wave_file("/Users/tim/Documents/Spaces/Resources/Sounds/Drums/Analog/Kick/MFB_Kick/wa_tanzbar_kick_17.wav") # copy your path to a wav file here
    play_obj = wave_obj.play()
    sleep(60/bpm*sequence[i%len(sequence)])
play_obj.wait_done()
print("Done")
