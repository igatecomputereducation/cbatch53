#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	for(i=n;i>=1;i--)
	{
		printf("%i\n",i);
	}
	
	return 0;
}
