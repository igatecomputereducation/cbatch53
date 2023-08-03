#include<stdio.h>
int main()
{
	int n,x;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(x=0;n!=0;n=n/10)
		x=x+1;
	
	printf("%i digits",x);
	return 0;
}
