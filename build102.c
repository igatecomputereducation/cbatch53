#include<stdio.h>
int main()
{
	int i,n,fact;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(fact=1,i=1;i<=n;i++)
		fact=fact*i;
	
	printf("Factorial %i",fact);
	return 0;
}
