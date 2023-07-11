#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%i",&n);
	if(n==0)
		printf("zero");
	if(n!=0)
		printf("Not a zero");
	return 0;
}
