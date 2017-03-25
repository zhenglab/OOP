objectsC = 
objectsCPP = overloadMemFunc1 helloOOP Constructor1 Constructor2 Constructor3 Constructor4 Constructor5 Constructor6 copyConstructor1 copyConstructor2 copyConstructor3 copyConstructor4 typeConvConstructor1 Destructor1 Destructor2 staticMemFunc1 Enclosing1 Enclosing2 Friend1 Friend2 thisPointer1 thisPointer2 constClassObj1 constClassFunc1 constClassFunc2

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
