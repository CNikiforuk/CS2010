/*
	Author: Carlos Nikiforuk
	Lab Assignment #9
	Purpose: Computer Data Structures Queue and Stack for integers.

	MAIN DRIVER
*/

#include "queue.h"
#include "stack.h"

using namespace std;

main(void){

	cout << endl;
				//construct
	queue q(3);		
	stack s(3);
	
				//check empty/full
	cout << "Queue: Empty " << q.empty() << "  Full " << q.full() << endl;
	cout << "Stack: Empty " << s.empty() << "  Full " << s.full() << endl;
	cout << endl;

	
				//store variables	
	q.store(1);
	q.store(2);
	q.store(3);		

	s.store(1);
	s.store(2);
	s.store(3);

				
	cout << "Values Stored." << endl << endl;


				//check empty/full
	cout << "Queue: Empty " << q.empty() << "  Full " << q.full() << endl;
	cout << "Stack: Empty " << s.empty() << "  Full " << s.full() << endl;
	cout << endl;
	

				//retrieve variables
	cout << "Queue: " << q.retrieve(); 
	cout << " " << q.retrieve(); 
	cout << " " << q.retrieve() << endl;

	cout << "Stack: " << s.retrieve(); 
	cout << " " << s.retrieve(); 
	cout << " " << s.retrieve() << endl;
	cout << endl;

}
