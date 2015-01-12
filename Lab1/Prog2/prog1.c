#include <stdio.h>

int x1 =5;
char *x2[] = { "1 message", "2 message", "3 message"};
float x3 = 4.500;


static float localvar = 0.0;

float fn1(int a,int b)
{
printf("in fn1 a=%d, b=%d \n",a,b);
return 3.0;
}

void fn2( char a )
{
printf("in fn2 a = %c \n",a);
}
