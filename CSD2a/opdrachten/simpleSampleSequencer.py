import simpleaudio as sa
import time

sequence = []
durNotes = []

correctInput = False
bpm = 120

while (not correctInput):
    userBpm = input("What bpm would you like?\n Empty for 120 bpm:\n ")

    if not userBpm:
        # empty string --> use default
        correctInput = True
    else:
        try:
            bpm = float(userBpm)
            correctInput = True
        except:
            print("No")

print("bpm = " + str(bpm))

# bpm to 16th noteduration
sixteenthNoteDur = 15/bpm
#print(sixteenthNoteDur)

        


# vraag ritme met kwarten als 1
print('1 = quarter note, 0.5 = eighth note etc. etc.\n Press "q" to commit')
while True:
    try:
        durNotes = input("note length " + str(len(sequence)+1) + " : ").replace(",",".")
        if (durNotes == "q"):
            break
        sequence.append(float(durNotes))
        print(sequence)
    except ValueError:
        print("No")

print(sequence)

# zet ritme om in timestamps van 16de

timestampeSeq = []
sum = 0

for timestamp in sequence:
    sixteenthNoteValue = timestamp *4
    timestampeSeq.append(sum)
    sum += sixteenthNoteValue

print(timestampeSeq)

# zet timestamps als 16e om naar tijd

timeDurations = [] 
for noteDur in timestampeSeq:
    timeDurations.append(sixteenthNoteDur*noteDur)

print(timeDurations)



# speel af
timeZero = time.time()
print("time zero = ", timeZero)
wave_obj = sa.WaveObject.from_wave_file("/Users/tim/Documents/Spaces/Resources/Sounds/Drums/Analog/Kick/MFB_Kick/wa_tanzbar_kick_17.wav") # copy your path to a wav file here


timePlayed = 0

while True:
    now = time.time() - timeZero
    if(timePlayed > (len(timeDurations)-1)):
        break
    if(now >= timeDurations[timePlayed]):
        play_obj = wave_obj.play()
        timePlayed += 1
    time.sleep(0.001)
play_obj.wait_done()