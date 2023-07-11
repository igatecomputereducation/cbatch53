#include<stdio.h>
int main()
{
	int a,b,sm,sb,pro;
	float dv;
	printf("First number");
	scanf("%i",&a);
	printf("Second number");
	scanf("%i",&b);
	sm=a+b;
	sb=a-b;
	pro=a*b;
	dv=(float)a/b;
	printf("Addition %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i\n",pro);
	printf("Division %f",dv);
	return 0;
}
