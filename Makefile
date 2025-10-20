CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = calculator
SOURCE = calculator.cpp

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

.PHONY: clean