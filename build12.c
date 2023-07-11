#include<stdio.h>
int main()
{
	int bre,hei;
	float area;
	printf("Breadth:");
	scanf("%i",&bre);
	printf("Height:");
	scanf("%i",&hei);
	area=1.0/2*bre*hei;
	printf("Area of triangle %f",area);
	return 0;
}
