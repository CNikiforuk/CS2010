/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Data Structures Queue and Stack for integers.

	QUEUE IMPLEMENTATION
*/

#include "queue.h"


//==================================================//
bool queue::empty()
//Returns 1 if queue is empty, 0 if queue is not empty.
//==================================================//
{
	return count == 0;
}



//==================================================//
bool queue::full()
//Returns 1 if queue is full, 0 if queue is not full.
//==================================================//
{
	return count == p.capacity();
}



//==================================================//
void queue::store(int a)
//Store integer variable at back of queue.
//==================================================//
{
	if (!full()){ 
		p[back++] = a;
		back = back % p.capacity();
		count++;
	}
}

//==================================================//
int queue::retrieve()
//Returns integer variable at front of queue, or -1 if full.
//==================================================//
{
	if (!empty()){ 
		front = front % p.capacity();
		count--;
		return p[front++];
	}
	else return -1;
}
