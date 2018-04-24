objectsC = 
objectsCPP = vectorEg1 vectorEg2 vectorEg3 listEg1 funcObj1 funcObj2 funcObj3 funcObj4 vectorEg4 vectorEg5 vectorEg6 vectorEg7 vectordequeEg1 dequeEg1 dequeEg2 dequeEg4

CC=gcc
CPP=g++
CFLAGS=

all: $(objectsC) $(objectsCPP)

$(objectsC): %: %.c
	$(CC) $(CFLAGS) $< -o $@

$(objectsCPP): %: %.cpp
	$(CPP) $(CFLAGS) $< -o $@

clean:
	rm -f $(objectsC) $(objectsCPP)
