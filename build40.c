#include<stdio.h>
int main()
{
	int n,gr;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	if(n%9==0)
		gr=9;
	else
		gr=n%9;
	
	printf("Equal single digit number %i",gr);
	return 0;
}
