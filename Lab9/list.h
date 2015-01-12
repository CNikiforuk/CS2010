/*
	Author: Carlos Nikiforuk
	Lab Assignment #8
	Purpose: Computer Data Structures Queue and Stack for integers.

	LIST ABSTRACT CLASS
*/

#ifndef list_h
#define list_h
#include <iostream>
#include <vector>


class list {

protected:      

    std::vector <int> p;	  

public :

     list( int n = 100) 
     { 
       p.resize(n);   
     }  

     virtual bool empty() = 0;

     virtual bool full() = 0;

     virtual void store(int a) = 0;

     virtual  int retrieve() = 0;

};

#endif
