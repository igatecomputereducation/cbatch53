#include<stdio.h>
int main()
{
	int x;
	
	x=15;
	abc:
		printf("%i\n",x);
		x=x-1;
	if(x>=1)
		goto abc;
	
	return 0;
}
