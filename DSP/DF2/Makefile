CXX=g++
CXXFLAGS=-Wall -std=c++17
SOURCE= main.o circularBuffer.o interpolation.o
TARGET=output

$(TARGET): $(SOURCE)
	$(CXX) -o $@ $(SOURCE) $(LDFLAGS)


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $<
clean:
	rm -f $(TARGET) *.o *.csv
