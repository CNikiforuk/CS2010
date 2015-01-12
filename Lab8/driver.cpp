/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Memory Simulation for integers.

	MAIN DRIVER
*/

#include "memory.h"



/***************************************--MAIN--****************************************/

main (void){
	
	cout << endl << "DRIVER  " << endl << endl;	
	
	memory a(15);		
	memory b;

	
	for (int i = 0; i<10; i++) b[i] = i;		//set 10 locations in b to 0,1,2...

	
	if (a == b) cout << "a is equal to b" << endl;	//compare a and b
	else cout << "a is not equal to b" << endl;

	a = b;						//make a equal b
		
	if (a == b) cout << "a is equal to b" << endl;	
	else cout << "a is not equal to b" << endl;	//compare a and b
	cout << endl;


	cout << "a[5]:      " << a[5] << endl;		//output a[5]
	a[5] = 0;					//change a[5] to 0
	cout << "new a[5]:  " << a[5] << endl << endl;	//output a[5]


	
	cout << "a:  " << a << endl;			//output a
	cout << "b:  " << b << endl << endl;			//output b

	cout << "a+b: " << a+b << endl;			//output a+b
	

return 0;
}
