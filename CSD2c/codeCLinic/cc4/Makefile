CXX= g++
CXXFLAGS = -I/usr/local/include -Wall -std=c++20
LDFLAGS=-ljack
# the cpp files from the current project to include
SRC_PROJECT = main.cpp
# the directory to the folder with the shared modules
CODELIBRARY_PATH = ../../../../codeLibrary/
# the modules to include
MODULES = oscillators audio
TARGET = example.loveJari output.csv

# append shared code path prefix to modules
MODULE_PATHS = $(addprefix $(CODELIBRARY_PATH),$(MODULES))
# module .mk files
MODULE_MK = $(patsubst %,%/module.mk,$(MODULE_PATHS))
# include the description for each module
SRC_MODULES =
include $(MODULE_MK)
# create src list for all .cpp files
SRC = $(addprefix $(CODELIBRARY_PATH),$(SRC_MODULES))
SRC+= $(SRC_PROJECT)

# look for include files in
# each of the modules
CXXFLAGS += $(patsubst %,-I%,./$(MODULE_PATHS))
# determine the object files --> replace all .cpp in SRC with .o
OBJ := $(patsubst %.cpp,%.o, $(filter %.cpp,$(SRC)))
# log OBJ
$(info $$OBJ is [${OBJ}])

# link the program
$(TARGET):$(OBJ)
	$(CXX) -o $@ $(OBJ) $(LDFLAGS)

# -o $*.o --> write .o file to the directory of the current target
.cpp.o:
	$(CXX) -c $< $(CXXFLAGS) -o $*.o

plot:
	python3 $(CODELIBRARY_PATH)audio/plot.py

clean:
	rm $(OBJ)
	rm $(TARGET)
