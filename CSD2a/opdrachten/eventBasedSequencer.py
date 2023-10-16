# play percussive loop with 16 events polyphonic (hardcoded)
# Ciska's code met wat aanpassingen (bedankt dat je daan deze code hebt laten zien en uitleggen)


#import modules
import simpleaudio as sa
import time as t

#---
#functions
# returns a list of event dictionaries, present it with a list of ts and the sample_id
def create_events(ts_seq, sample_id):
    events = []
    for ts in ts_seq:
        events.append({"ts": ts, "sample_id": sample_id})
    return events

def get_ts(event):
    return event["ts"]

#---

#hardcoded rythm for practice
ts_seq_high = [0,0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5]
ts_seq_mid = [1.0, 3.0, 3.25]
ts_seq_low = [0, 0.75, 2.0, 2.25, 2.75]

#load samples
samples = {}
samples["kick"] = sa.WaveObject.from_wave_file("/Users/tim/Documents/Spaces/Resources/Sounds/Drums/Analog/Kick/MFB_Kick/wa_tanzbar_kick_17.wav")
samples["snare"] = sa.WaveObject.from_wave_file("/Users/tim/Documents/Spaces/Resources/Sounds/Drums/Analog/Snare/MFB_Snare/wa_tanzbar_snare_16.wav")
samples["hi_hat"] = sa.WaveObject.from_wave_file("/Users/tim/Documents/Spaces/Resources/Sounds/Drums/Analog/HH/MFB_HH/wa_tanzbar_hihat_03.wav")


# create event sequence
event_seq = []
event_seq += create_events(ts_seq_high, "hi_hat")
event_seq += create_events(ts_seq_mid, "snare")
event_seq += create_events(ts_seq_low, "kick")


# orden events based on timestamp
event_seq.sort(key=get_ts)

# iterate through time sequence and play sample

time_zero = t.time()
play_seq = event_seq.copy()
event = play_seq.pop(0)



num_playback_times = 2

while num_playback_times:
    now = t.time() - time_zero
    # check if we need to play a sample
    if(now > event["ts"]):
        sample_id = event["sample_id"]
        samples[sample_id].play()
        if play_seq:
            event = play_seq.pop(0)
        else:
            play_seq = event_seq.copy()
            event = play_seq.pop(0)
            num_playback_times -= 1
            t.sleep(0.5)
            time_zero = t.time()
    else:
        t.sleep(0.001)



