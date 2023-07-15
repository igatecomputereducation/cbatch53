#include<stdio.h>
int main()
{
	int num;
	printf("Enter any natural number:");
	scanf("%i",&num);
	(num%2==0)?printf("Even number"):printf("Odd number");
	return 0;
}
