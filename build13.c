#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	hra=sal*15.0/100;
	da=sal*17.0/100;
	gross=sal+hra+da;
	printf("\nPayslip\n-------------------------------\n");
	printf("Salary %i\n",sal);
	printf("House Rent Allowence %.2f\n",hra);
	printf("Dearness allowence %.2f\n",da);
	printf("Gross salary %.2f",gross);
	return 0;
}
