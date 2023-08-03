#include<stdio.h>
int main()
{
	int x;
	
	x=5;
	abc:
		printf("%i\n",x);
		x=x+1;
	if(x<=15)
		goto abc;
	
	return 0;
}
