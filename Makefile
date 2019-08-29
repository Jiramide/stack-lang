.PHONY : clean

COMPILER_ARGS := -Wall -ansi -pedantic -Wstrict-prototypes -std=c99
OBJECTS := \
  out/main.o \
  out/token.h

stacklang.exe : $(OBJECTS)
  gcc $(COMPILER_ARGS) $(OBJECTS) -o stacklang.exe

out/main.o : src/main.c
  gcc $(COMPILER_ARGS) -Iinc -c -o src/main.c -o out/main.o

out/%.o : src/%.c inc/%.h
  gcc $(COMPILER_ARGS) -Iinc -c src/$(*F).c -o out/$(*F).o

clean :
  del /q out stacklang.exe
