//Carlos Nikiforuk

#include <iostream>
#include <math.h>
using namespace std;

int main(){

	double a, b, c, x1, x2;

	cout << "ENTER VARIABLE A" << endl;
	cin >> a;

	cout << "ENTER VARIABLE B" << endl;
	cin >> b;

	cout << "ENTER VARIABLE C" << endl;
	cin >> c;	
	
	
	x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
	x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

	cout << "ROOT 1 IS " << x1 << ", ROOT 2 IS " << x2;



}
