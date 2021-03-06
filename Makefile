CFLAGS= -g 
LDFLAGS= -lm -ldl -lreadline
OBJ= lex.yy.o parser.tab.o dsl/seq.o dsl/list.o dsl/array.o dsl/generic.o astprint.o runtime.o gc.o object.o state.o builtins.o solrun.o

all: $(OBJ)
	git submodule init && git submodule sync && git submodule update
	gcc $(CFLAGS) $? $(LDFLAGS) -o sol 
	rm -rf *.o

%.o: %.c
	gcc -c -o $@ $? $(CFLAGS)

%.tab.c %.tab.h: %.y
	bison -rall -fall -d $?

lex.yy.c: tokenizer.lex parser.tab.h
	flex $<

clean:
	rm -f *.o dsl/*.o sol

docs: Doxyfile 
	doxygen Doxyfile
	sphinx-build -b html . ./_build
