#include<stdio.h>
#include<math.h>
int main()
{
	int n,digs,sum,t;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(t=n,digs=0;t!=0;t=t/10)
		digs=digs+1;
	
	for(t=n,sum=0;t!=0;t=t/10)
		sum=sum+pow(t%10,digs);
		
	if(n==sum)
		printf("Armstrong number")	;
	else
		printf("Not an armstrong number");
	return 0;
}
