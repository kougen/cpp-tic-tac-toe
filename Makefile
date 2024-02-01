CXX = g++
CXXFLAGS = -Wall -g -lncursesw -Ilib -std=c++98

# Define the target executable
TARGET = tictactoe

SOURCES = game.cpp $(wildcard lib/*.cpp)

OBJ = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: test
test: $(OBJ)
	$(CXX) $(CXXFLAGS) -o tests/boardtests.out tests/boardtests.cpp $(wildcard lib/*.cpp)
	./tests/boardtests.out

.PHONY: clean
clean:
	rm rm -f *.o lib/*.o tests/*.o tests/test1 $(TARGET)

.PHONY: run
run: $(TARGET)
	./$(TARGET)

.PHONY: all
all: clean $(TARGET) test
