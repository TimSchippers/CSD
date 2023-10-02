import simpleaudio as sa
import time
from pynput import keyboard

sequence = []
durNotes = []

correctInput = False
bpm = 120

while (not correctInput):
    userBpm = input("What bpm would you like?\n Empty for 120 bpm:\n ")

    if not userBpm:
        # empty string --> use default
        correctInput = True
    elif bpm < 0:
       print("No")
    else:
        try:
            bpm = float(user_bpm)
            correctInput = True

        except:
            print("No")

print("bpm = " + str(bpm))

# bpm to 16th noteduration
sixteenthNoteDur = 15/bpm
#print(sixteenthNoteDur)

        

#TODO loops?

#DONE vraag ritme met kwarten als 1
print('1 = quarter note, 0.5 = eighth note etc. etc.\n Press "q" to commit')
while True:
    try:
        durNotes = input("note length " + str(len(sequence)) + " : ")
        if (durNotes == "q"):
            break
        sequence.append(float(durNotes))
    except ValueError:
        print("No")

print(sequence)

#TODO zet ritme om in timestamps van 16de



#TODO zet timestamps als 16e om naar tijd

#TODO speel af