#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,sum,digc,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{

		t=n;
		for(digc=0;t!=0;t=t/10)
			digc=digc+1;
			
		t=n;
		for(sum=0;t!=0;t=t/10)
			sum=sum+pow(t%10,digc);
			
		if(n==sum)
			printf("%i\n",n);
		
	}
	return 0;
}
