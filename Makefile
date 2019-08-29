.PHONY : clean

COMPILER_ARGS := -Wall -ansi -pedantic -Wstrict-prototypes -std=c99

stacklang.exe : main.c


clean :
  del out
