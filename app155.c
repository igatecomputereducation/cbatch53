#include<stdio.h>
int main()
{
	int a[5];
	printf("Enter 2 integers\n");
	scanf("%d%d",&a[0],&a[1]);
	a[2]=a[0]+a[1];
	a[3]=a[0]-a[1];
	a[4]=a[0]*a[1];
	printf("Sum %d\n",a[2]);
	printf("Subtraction %d\n",a[3]);
	printf("Product %d",a[4]);
	return 0;
}
