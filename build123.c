#include<stdio.h>
int main()
{
	int n,sum;
	
	sum=0;
	printf("Enter integers and 0 to stop..\n");
	while(1)
	{
		scanf("%i",&n);
		if(n==0)
			break;
		sum=sum+n;
	}
	
	
	printf("Sum %i",sum);
	return 0;
}
