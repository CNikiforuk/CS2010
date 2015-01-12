/*
	Author: Carlos Nikiforuk
	Lab Assignment #7
	Purpose: Computer Memory Simulation for integers.

	CLASS INTERFACE HEADER
*/

#ifndef memory_h
#define memory_h
#endif
#include <iostream>
#include <vector>


using namespace std;

typedef int data;		


class memory{
/*===============================
Memory class interface. Simulates memory using vectors.
================================*/


public:
	data size;		//size of container for memory	
	vector<data> mem;	//vector containing data
		
	memory();		
	memory(int);
	
	void store (int, data);
	data retrieve(data);

	void copy(int, int, int);

	void dump ();
	void dump (int, int);
};
