## make to do a clean + create, make clean to erase, make compress to compress file folder.
all : clean prog
prog : driver.o memory.o
		g++ driver.o memory.o -o prog
		
driver.o : driver.cpp
		g++ -c -std=c++0x driver.cpp
memory.o : memory.cpp
		g++ -c -std=c++0x memory.cpp
clean :
	rm -f driver.o memory.o memory.cpp~ memory.h~ driver.cpp~ makefile~ prog
compress:
	tar -cvvf Lab7.tar ../Lab7/
