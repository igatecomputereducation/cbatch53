#include<stdio.h>
int main()
{
	int n,m,i,big;
	
	printf("First number:");
	scanf("%i",&n);
	
	printf("Second number:");
	scanf("%i",&m);
	
	big=(n>m)?n:m;
	
	for(i=big;1;i++)
	{
		if(i%n==0 && i%m==0)
		{
			printf("LCM %i\n",i);
			break;
		}
	}
	
	return 0;
}
