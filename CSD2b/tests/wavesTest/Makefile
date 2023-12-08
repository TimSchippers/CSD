CXX=g++
CXXFLAGS=-Wall -std=c++1z
LDFLAGS=
SOURCE= writeToFile.o main.o sine.o oscillator.o
TARGET=example

$(TARGET): $(SOURCE)
	$(CXX) -o $@ $(SOURCE) $(LDFLAGS)

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $<
clean:
	rm -f $(TARGET) *.o *.csv
