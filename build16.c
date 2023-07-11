#include<stdio.h>
int main()
{
	int pmr,cmr,nu;
	float bill;
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	nu=cmr-pmr;
	bill=nu*9.75;
	printf("Number of units %i\n",nu);
	printf("Bill to pay %.2f",bill);
	return 0;
}
