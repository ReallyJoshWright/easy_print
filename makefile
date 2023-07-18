CXX = g++
CXXFLAGS = -std=c++20 -g -Wall
INCPATH = -I.
OBJECTS = main.o
TARGET = main

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)
$(OBJECTS): main.cpp
	$(CXX) $(CXXFLAGS) $(INCPATH) -c main.cpp
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)
