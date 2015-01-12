#include <stdio.h>

int main ()
{
	int a = 3, b = 7, i;
	for (i = 0; a!=b; i++)
		a++;
	if(a==b) {
		a++;
		b--;
		printf(" in if <%d,%d>\n",a,b);
	} else
	        printf(" in else <%2d, %2d>\n",a,b);
	return 0;
}  
