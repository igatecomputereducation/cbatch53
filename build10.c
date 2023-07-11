#include<stdio.h>
int main()
{
	float rad,area,cir;
	printf("Radius:");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	cir=2*3.14*rad;
	printf("Area of circle %f",area);
	printf("\nCircumference of circle %f",cir);
	return 0;
}
