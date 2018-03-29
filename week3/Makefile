objectsC = 
objectsCPP = addComplex1 addComplex2 assignOverload1 assignOverload2 assignOverload3 assignOverload4 assignOverload5 assignOverload6 friendOverload1 friendOverload2 friendOverload3 friendOverload4 overloadEg vectorEg streamOverload1 streamOverload2 incdecOverload1

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
