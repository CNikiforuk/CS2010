#include <stdio.h>

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
  printf("%s\n",x2[2]);
  printf("%5.2f\n",x3);
  return 0;
}
