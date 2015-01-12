## make to do a clean + create, make clean to erase, make compress to compress file folder.
all : clean prog
prog : queue.o stack.o main.o
		g++ queue.o stack.o main.o -o prog
		
queue.o : queue.cpp
		g++ -c -std=c++0x queue.cpp
stack.o : stack.cpp
		g++ -c -std=c++0x stack.cpp
main.o : main.cpp
		g++ -c -std=c++0x main.cpp
clean :
	rm -f queue.o stack.o main.o queue.cpp~ stack.cpp~ main.cpp~ list.h~ queue.h~ stack.h~ makefile~ prog

compress:
	tar -cvvf Lab9.tar ../Lab9/
