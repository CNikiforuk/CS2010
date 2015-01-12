#include <iostream>
using namespace std;

void swap (int & x, int & y)
{
	int tmp;
	tmp = x; x=y, y=tmp;
}

int main (void)
	{
	 int a=5, b=7;
	 swap (a,b);
	 cout << a << "  " << b;
	 return 0;
	}
