#include<stdio.h>
int main()
{
	int n,i,x;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(x=0,i=1;i<=n;i++)
	{
		if(n%i==0)
			x=x+1;
	}
	
	if(x==2)
		printf("Prime number");
	else
		printf("Not a prime number");
		
	return 0;
}
