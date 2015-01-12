/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Data Structures Queue and Stack for integers.

	STACK INTERFACE
*/

#ifndef stack_h
#define stack_h
#include "list.h"


class stack: public list{

private:
	int count;	//size of stack
		
public:
	stack(int n=100) : list(n), count(0){}

	bool empty();
	bool full();

	void store(int a);
	int retrieve();

};

#endif
