objectsC = 
objectsCPP = virtualEg1 virtualEg2 virtualEg3 virtualPolymorphism1 virtualPolymorphism2 virtualPolymorphism3 virtualPolymorphism4 virtualPolymorphism5 virtualPolymorphism6 virtualPolymorphism7 virtualPolymorphism8 virtualPolymorphism9

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
