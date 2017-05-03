objectsC = 
objectsCPP = multisetEg1 multisetEg2 setEg1 multimapEg1 multimapEg2 mapEg1 priorityQueue1 structClass1 structClass2 structClass3 VectorList SetMap

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
