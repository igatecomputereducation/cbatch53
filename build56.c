#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter any integer:");
	scanf("%i",&n);
	
	if(n>=-9 && n<=9)
		printf("Single digit number");
	if(n>=-99 && n<=-10 || n>=10 && n<=99)
		printf("Two digit number");
	if(n>=-999 && n<=-100 || n>=100 && n<=999)
		printf("Three digit number");
	if(n>999)
		printf("Biggest number");
	if(n<-999)
		printf("Smallest number");
	
	return 0;
}
