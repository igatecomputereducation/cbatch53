#include<stdio.h>
int main()
{
	int a[5],i;
	
	printf("Enter 5 integers\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
		
	printf("The given elements\n");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	
	return 0;
}
