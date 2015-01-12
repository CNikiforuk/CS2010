## make to do a clean + create, make clean to erase
all : clean prog
prog : dictionary.o main.o
		g++ dictionary.o main.o -o prog
		
dictionary.o : dictionary.cpp
		g++ -c dictionary.cpp
main.o : main.cpp
		g++ -c main.cpp
clean :
	rm -f dictionary.o main.o dictionary.cpp~ header.h~ main.cpp~ makefile~ data.dat~ prog
compress:
	tar -cvvf Lab6.tar ../Lab6/
