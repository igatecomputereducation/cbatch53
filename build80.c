#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=n;
	abc:
		printf("%i\n",x);
		x=x-1;
	if(x>=1)
		goto abc;
	
	return 0;
}
