import simpleaudio as sa

wave_obj = sa.WaveObject.from_wave_file("/Users/tim/Documents/Spaces/Resources/Sounds/Drums/Analog/Kick/MFB_Kick/wa_tanzbar_kick_17.wav") # copy your path to a wav file here
play_obj = wave_obj.play()
play_obj.wait_done()

#' found the code on https://pypi.org/project/simpleaudio/