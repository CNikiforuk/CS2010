/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Data Structures Queue and Stack for integers.

	STACK IMPLEMENTATION
*/

#include "stack.h"


//==================================================//
bool stack::empty()
//Returns 1 if stack is empty, 0 if stack is not empty.
//==================================================//
{
	return count == 0;
}


//==================================================//
bool stack::full()
//Returns 1 if stack is full, 0 if stack is not full.
//==================================================//
{
	return count == p.capacity();
}


//==================================================//
void stack::store(int a)
//Pushes integer variable at back of stack.
//==================================================//
{
	if (!full()) p[count++] = a;
}


//==================================================//
int stack::retrieve()
//Pops integer variable from back of stack.
//==================================================//
{
	if (!empty()) return p[--count];
}
