## make to do a clean + create, make clean to erase
all : clean prog
prog : dictionary.o main.o
		g++ dictionary.o main.o -o prog
		
dictionary.o : dictionary.cpp
		g++ -c dictionary.cpp
main.o : main.cpp
		g++ -c main.cpp
clean :
	rm -f dictionary.o main.o prog
