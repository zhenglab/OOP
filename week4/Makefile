objectsC = 
objectsCPP = studentManage1 derivedClass1 derivedClass2 derivedClass3 derivedClass4 derivedClass5 derivedClass6 derivedClass7 quiz1 quiz2 quiz3 quiz4 quizEx quiz5 quiz6

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
