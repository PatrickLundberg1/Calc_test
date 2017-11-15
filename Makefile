C_COMPILER = gcc
UNITY_PATH = Unity/src/unity.c

all: calctest calc

calctest: calctest.c calc.c $(UNITY_PATH)
	$(C_COMPILER) -o calctest calctest.c calc.c $(UNITY_PATH)
	
calc: main.c calc.c $(UNITY_PATH)
	$(C_COMPILER) -o calc main.c calc.c
