#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number into a:");
	scanf("%i",&a);
	printf("Enter number into b:");
	scanf("%i",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value in a %i\n",a);
	printf("Value in b %i",b);
	return 0;
}
