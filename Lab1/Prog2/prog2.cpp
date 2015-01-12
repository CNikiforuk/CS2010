
#include <iostream>
using namespace std;

extern int x1;
extern char *x2[];
extern float x3;

extern float fn1( int a, int b);
extern void fn2( char a );

static int localvar,anothervar;

int main()
{
  fn1(x1,x1);
  fn2(x2[0][0]);
  cout << x2[2] << endl;
  cout << x3 << endl;
  return 0;
}
