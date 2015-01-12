/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Data Structures Queue and Stack for integers.

	QUEUE INTERFACE
*/

#ifndef queue_h
#define queue_h
#include "list.h"


class queue: public list{

private:
	int front;	//front of queue
	int back;	//back of queue
	int count;	//size of queue

public:	
	queue(int n=100) : list(n), front(0), back(0), count(0) {}
	
	bool empty();
	bool full();

	void store(int a);
	int retrieve();

};

#endif
