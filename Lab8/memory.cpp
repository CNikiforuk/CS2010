/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Memory Simulation for integers.

	CLASS IMPLEMENTATION
*/

#include "memory.h"





/*************************************--CONSTRUCTORS--*************************************/

memory::memory(){
/*===============================
Default contructor, creates 10 memory locations.
Zero initialized.
================================*/

	size = 10;
	for(int i = 0; i<size; i++) mem.push_back(0);
}

memory::memory(int a){
/*===============================
Constructor that will create 'a' memory locations.
Zero initialized.
================================*/

	size = a;
	for(int i = 0; i<size; i++) mem.push_back(0);
}







/*************************************--FUNCTIONS--***************************************/

void memory::store(int a, data x){
/*===============================
Will store data x into memory location a.
Checks if a is valid location.
================================*/

	if (a<size && a>=0){	
		mem[a] = x;
	}
}



data memory::retrieve(int a){
/*===============================
Returns data at memory location a.
If data cannot be stored, return -1.
================================*/

	if (a<size && a>=0){	
		return mem[a];
	} 
	else return -1;
}



void memory::copy(int s, int x, int d){
/*===============================
Copies memory from source location s, of size x,
to destination location d. Checks that d+x is 
valid location.
================================*/

	if (d+x < size && s>=0 && d>=0){
		for (int i=0; i<x; i++){
			store(d+i,retrieve(s+i));
		}
	}

}



void memory::dump(int a, int b){
/*===============================
Dumps current memory from location range a to b.
If a>b, will dump memory from location range b to a.
Checks that both a and b are valid locations.
================================*/

	if(b<=size && a<b && a>=0 && b>=0){	
		for(int i = a; i<b; i++) cout << mem[i] << " ";
	}
	else if (a<=size && b<a){
		for(int i = a-1; i>=b; i--) cout << mem[i] << " ";
	}
}



void memory::dump(){
/*===============================
Dumps all currently allocated memory.
================================*/

	dump(0,size);
}




/********************************--OVERLOADED OPERATORS--**********************************/

memory memory::operator+(const memory a){
	mem.insert(mem.end(), a.mem.begin(), a.mem.end());
	size = size + a.size;
	return *this;	
}

bool memory::operator==(const memory a){return this->mem == a.mem;}
bool memory::operator==(const data x){return *this == x;}

data& memory::operator[](const int a){return mem[a];}

ostream& operator<<(ostream& output, const memory a){
	for(int i = 0; i<a.size; i++) output << a.mem[i] << " ";
	return output;
}



