#plik Makefile
.PHONY: clean
.SUFFIXES: .c .o .a .so
#vpath %.h incl
#vpath %.c src

%: %.o polelib.a objlib.so
	gcc -o $@ $^
%.o: %.c
	gcc -c $<
pole.o: pole.c
	gcc -c $<
objetosc.o: objetosc.c
	gcc -c $<
code2: code2.o polelib.a objlib.so
code2.o: code2.c polelib.h objlib.h
pole.o: pole.c
objetosc.o: objetosc.c
polelib.a: pole.o
	ar rs $@ $^
objlib.so: objetosc.o
	gcc -shared -o $@ $<
clean:
	rm -f code2 *.o *.a *.so
