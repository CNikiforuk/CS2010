/*
	Author: Carlos Nikiforuk
	Lab Assignment #7
	Purpose: Computer Memory Simulation for integers.

	MAIN DRIVER
*/

#include "memory.h"



/***************************************--MAIN--****************************************/

main (void){
	
	memory m = memory(5);			//constructor size 5
	m.store(0,0);
	m.store(1,1);				//store
	m.store(2,2);

	m.dump(3,0);		
	cout << endl;	
	m.dump(0,3);				//dump
	cout << endl;
	m.dump();
	cout << endl;
	
	data x = 0;
	x = m.retrieve(2);			//retrieve
	cout << x << endl << endl;


	m.store(0,0);
	m.store(1,1);
	m.store(2,2);
	m.store(3,3);
	m.store(4,4);

	cout << "ORIGINAL DATA" << endl;
	m.dump(); 

	cout << endl << "TEST COPY 1" << endl;	
	m.copy(0,2,2);				//copy 1
	m.dump();
	cout << endl;

	m.store(0,0);
	m.store(1,1);
	m.store(2,2);
	m.store(3,3);
	m.store(4,4);	

	cout << "TEST COPY 2" << endl;		//copy 2
	m.copy(3,2,0);			
	m.dump();
	cout << endl;
	

return 0;
}
