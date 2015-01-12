#include <stdio.h>

void swap (int*const x, int*const y)
{
	int tmp;
	tmp = *x; *x = *y; *y = tmp;
}

int main (void)
	{
	 int a = 5, b = 7;
	 swap(&a,&b);
	 printf("%d %d\n" ,a,b);
	 return 0;
	}
