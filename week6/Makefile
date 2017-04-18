objectsC = 
objectsCPP = fileRW1 fileRW2 fileRW3 fileRW4 templateFunc1 templateFunc2 templateFunc3 templateClass1 templateClass2 stringEg1 stringEg2 stringEg3 stringEg4 stringEg5 stringEg6 stringEg7 stringEg8 stringEg9 stringEg10 stringEg11 stringEg12 ioEg1 ioEg2 ioEg3 ioEg4

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
