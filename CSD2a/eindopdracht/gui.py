import math

def bpm_input(default_bpm):
    # User can give a BPM but can skip for default
    bpm = default_bpm
    correct_input = False
    while (not correct_input):
        user_bpm = input("What bpm would you like?\n Empty for "+ str(default_bpm) +" bpm:\n ").replace(",",".")
        if not user_bpm:
            # empty string --> use default
            correct_input = True
        else:
            try:
            # Checks if bpm is float and positive, if negative it's changed to positive
                if (float(user_bpm) > 0):
                    bpm = float(user_bpm)
                    correct_input = True
                else:
                    print("Negative bpm detected...\nChanging to positive.")
                    bpm = float(user_bpm) * -1
                    correct_input = True
            except:
                    print("I need a float or integer")

    return bpm

def time_signature_input(default_time_signature):
    # User can give a time signature but can skip for default
    time_signature = default_time_signature
    correct_input = False
    while (not correct_input):
        user_time_signature = input("What time signature do you want to use?\n empty for "+default_time_signature +": ")
        if (not user_time_signature):
            # empty string --> use default
            pass
        else:
            time_signature = user_time_signature

        time_signature = time_signature.replace("/"," ")
        try:
        #splitsing the 2 integers in 2 different values in a list
            time_signature = list(map(int,time_signature.split()))
            if(len(time_signature)>2):
                raise
            number_of_beats = time_signature[0] #defines the 1st int as the beat length
            note_value_of_beat = time_signature[1] #defines the note value of the beat
            if (math.log2(note_value_of_beat)-int(math.log2(note_value_of_beat)) != 0): #checks if the note value of the time signature is a power of 2, 2/3 can't be a time signature
                print("Not an approved time signature.\nNote value is always a power of 2 ")
                continue
            correct_input = True
        except:
            print("Use this format: 4/4 ")

    return time_signature, number_of_beats, note_value_of_beat

def modifier_input(default_modifier, note_value):
    # User can give a modifier but can skip for default
    modifier = default_modifier
    correct_input = False
    note_value_names = {"1":"whole","2":"half","4":"quarter","8":"eigth","16":"sixteenth","32":"thirty-second","64":"sixty-fourth"}
    while (not correct_input):
        user_modifier = input("trigger modifier: (multiply the note value to play more/less then every beat in the time signature) \n 1 = every " + str((note_value_names.get(str(int(note_value))))) + " note, 2 = every " + str(note_value_names.get(str(int(note_value * 2)))) + " note, 0.5 = every " + str(note_value_names.get(str(int(note_value / 2)))) +" note\n Empty for " + str(default_modifier) + "\n ")
        if not user_modifier:
            # empty string --> use default
            correct_input = True
        else:
            try:
            # Checks if modifier is float and positive, if negative it's changed to positive
                if (float(user_modifier) > 0):
                    modifier = float(user_modifier)
                    correct_input = True
                else:
                    print("Negative modifier detected...\nChanging to positive.")
                    modifier = float(user_modifier) * -1
                    correct_input = True
            except:
                    print("I need a float or integer")

    return modifier

def between_input(default, first, last, name):
    # User can give a number but can skip for default
    number = default
    correct_input = False
    while (not correct_input):
        user_input = input("What " + name +" would you like?\n Empty for "+ str(default) +" input:\n ").replace(",",".")
        if not user_input:
            # empty string --> use default
            correct_input = True
        else:
            # Checks if input is float and positive, if negative it's changed to positive
            if (int(first) <= float(user_input) <= int(last)):
                number = float(user_input)
                correct_input = True
            else:
                print("I need a float between "+ str(first) + " and " + str(last))

    return number
