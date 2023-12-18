CXX= g++
CXXFLAGS = -I/usr/local/include -Wall -std=c++1z
LDFLAGS= -ljack
SOURCE=callback.o audioToFile.o ui.o melody.o synth.o simpleSynth.o addSynth.o oscillator.o triangle.o sine.o  saw.o main.o
TARGET=example

$(TARGET) : $(SOURCE)
	$(CXX) -o $@ $(SOURCE) $(LDFLAGS)

.cpp.o:
	$(CXX) -c $< $(CXXFLAGS)

clean:
	rm -f $(TARGET) *.o *.csv
