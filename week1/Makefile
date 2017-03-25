objectsC = hello1 hello2 hello3 helloCool1 helloCool2 helloCool3 helloCool4 helloCool5 helloC cliarg1 cliarg2 cliarg3 pointerConst1 pointerConst2 pointerFunction1 pointerFunction2
objectsCPP = helloCPP helloOOP quote1 quote2 quote3a quote3b quote3c quote4 quote5 defaultArgFunc1 dynamicAlloc1 pointerFunction3a pointerFunction3b inlineFunction1 overloadFunction1 classRectangle classEmployee

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
