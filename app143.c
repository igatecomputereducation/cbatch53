#include<stdio.h>
int main()
{
	int i,j;
	
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=5-j;i++)
			printf("     ");
		for(i=j;i>=1;i--)	
			printf("%5i",i);
		for(i=2;i<=j;i++)
			printf("%5i",i);
		printf("\n\n");
	}
	
	return 0;
}
