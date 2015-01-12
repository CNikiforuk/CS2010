//Carlos Nikiforuk

#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int g, a, l, w, c;

	do {
	cout << "COVERAGE PER GALLON" << endl;
	cin >> c;
	} while (c < 0);
	
	do {
	cout << "LENGTH OF WALL" << endl;
	cin >> l;
	} while (l < 0);

	do {
	cout << "WIDTH OF WALL" << endl;
	cin >> w;
	} while (w < 0);

	
	a = l*w;
	g = a/c;

	if (a%c != 0) g = g+1;
	
	cout << "YOU NEED " << g << " GALLONS!";
	
}
