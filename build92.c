#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		if(n%i==0)
			printf("%i\n",i);
		
		i++;
	}
	
	return 0;
}
