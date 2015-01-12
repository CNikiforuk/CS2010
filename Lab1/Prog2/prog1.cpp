#include <iostream>
using namespace std;

int x1 =5;
char *x2[] = { "1 message", "2 message", "3 message"};
float x3 = 4.500;


static float localvar = 0.0;

float fn1(int a,int b)
{
   cout << "in fn1 a = "
      << a << ", b" << b << endl;
   return 3.0;
}

void fn2( char a )
{
   cout << "in fn2 a = " << a << endl;
}
