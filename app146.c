#include<stdio.h>
int main()
{
	int i,n,sum,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		for(sum=0,i=1;i<n;i++)
		{
			if(n%i==0)
				sum=sum+i;
		}
		
		if(n==sum)
			printf("%i\n",n);
	}
	
	return 0;
}
