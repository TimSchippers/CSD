CXX=g++
CXXFLAGS=-Wall -std=c++1z
LDFLAGS=
SOURCE= writeToFile.o synth.o main.o
TARGET=example

$(TARGET): $(SOURCE)
	$(CXX) -o $@ $(SOURCE) $(LDFLAGS)

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $<
clean:
	rm -f $(TARGET) *.o *.csv
