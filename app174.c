#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i;
	
	printf("Elements of array\n");
	for(i=0;i<5;i++)
		printf("%5i",a[i]);
	return 0;
}
