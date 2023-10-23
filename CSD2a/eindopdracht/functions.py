import math

def bpm_input(default_bpm):
    bpm = default_bpm
    correct_input = False
    while (not correct_input):
        # User can give a BPM but can skip for default 120 bpm
        user_bpm = input("What bpm would you like?\n Empty for 120 bpm:\n ").replace(",",".")

        if not user_bpm:
            # empty string --> use default
            correct_input = True
        else:

            try:
                if (float(user_bpm) > 0):
                    bpm = float(user_bpm)
                    correct_input = True
                else:
                    bpm = float(user_bpm) * -1
                    print("Negative bpm detected...\nChanging to positive.")
                    correct_input = True
            except:
                    print("I need a float or integer")

    return bpm

def time_signature_input(default_time_signature):
    time_signature = default_time_signature
    correct_input = False
    while (not correct_input):
        user_time_signature = input("What time signature do you want to use?\n empty for 4/4: ")
        if (not user_time_signature):
            # empty string --> use default
            pass
        else:
            time_signature = user_time_signature

        time_signature = time_signature.replace("/"," ")
        try:
            time_signature = list(map(int,time_signature.split()))
            if(len(time_signature)>2):
                raise
            number_of_beats = time_signature[0]
            note_value_of_beat = time_signature[1]
            if (math.log2(note_value_of_beat)-int(math.log2(note_value_of_beat)) != 0): #checks if the note value of the time signature is a power of 2, 2/3 can't be a time signature
                print("Not an approved time signature.\nNote value is always a power of 2 ")
                continue

            correct_input = True
        except:
            print("Use this format: 4/4 ")
    return number_of_beats, note_value_of_beat
