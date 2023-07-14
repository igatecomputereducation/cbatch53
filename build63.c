#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>100000)
	{
		hra=sal*27/100;
		da=sal*29/100;
	}
	else if(sal>=50001)
	{
		hra=sal*25/100;
		da=sal*28/100;
	}
	else if(sal>=25001)
	{
		hra=sal*23/100;
		da=sal*27/100;
	}
	else if(sal>=10001)
	{
		hra=sal*21/100;
		da=sal*25/100;
	}
	else if(sal>=1)
	{
		hra=sal*15/100;
		da=sal*19/100;
	}
	
	gross=sal+hra+da;
	printf("\n\nSalary %i\n",sal);
	printf("House Rent Allowence %.2f\n",hra);
	printf("Dearness allowence %.2f\n",da);
	printf("Gross salary %.2f",gross);
	return 0;
}
