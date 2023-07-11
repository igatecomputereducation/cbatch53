#include<stdio.h>
int main()
{
	float cel,fah;
	printf("Enter temparature in celsius:");
	scanf("%f",&cel);
	fah=cel*9/5+32;
	printf("Temparature in fahrenheit %f",fah);
	return 0;
}
