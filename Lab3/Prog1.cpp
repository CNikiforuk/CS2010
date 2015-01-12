/*
	Author: Carlos Nikiforuk
	Lab Assignment #3 
	Purpose: Craps
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

//functions

int die(){
	return rand()%6+1;
}

int roll(){
	return (die())+(die());
}

void playGame(){
	
	int die1 = die();
	int die2 = die();
	int result = die1+die2;
	int point = result;
	bool cont=false;
	
	
	//initial roll
	switch(result){
		case 7:
		case 11: cout << "player rolled " << die1<<"+"<<die2<<"= "<< result << ", player win. " << endl;
		break;
		case 2: 
		case 3: 
		case 12: cout << "player rolled " << die1<<"+"<<die2<<"= "<< result << ", player lose. " << endl;
		break;
		default: {cout << "point is " << die1<<"+"<<die2<<"= "<< result << ". " << endl; cont=true;}
		break;
	}

	char res = 't';
	bool r = false;
	
	
	while (!r && cont==true){
		cout << "Enter r to roll " ;
		cin >> res;
		if (res == 'r' || res == 'R') r = true;
			}

	result=0;
	while (result != (point || 7) && cont==true){
		die1 = die();
		die2 = die();
		result = die1+die2;
		
		if (result == 7)
			{
			cout << endl << "player rolled" << die1<<"+"<<die2<<"= "<< result << ", player lose. " << endl;
			cont = false;
			}

		else if (result == point) 
			{
			cout << endl << "player rolled point of " << die1<<"+"<<die2<<"= "<< result << ", player win. " << endl;
			cont = false;
			}

		else cout << endl << "player rolled " << result << endl;
		
	}
}

//main

int main( ) {
  char ans;
  bool done = false;
  srand(time(NULL));
  while ( ! done ) {
         playGame();  
         cout << " Play again (y/n) ? " << endl;
         cin >> ans;
         if ( ans == 'y' || ans == 'Y') done = false;
             else done = true;
  }
  return 0;
}


