#include<stdio.h>
int main()
{
	int n,t,fact,sum,i,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		t=n;
		for(sum=0;t!=0;t=t/10)
		{
			for(fact=1,i=1;i<=t%10;i++)
				fact=fact*i;
				
			sum=sum+fact;	
		}
		
		if(n==sum)
			printf("%i\n",n);
		
	}
		
	return 0;
}



