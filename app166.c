#include<stdio.h>
int main()
{
	int a[50],b[50],n,i;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(i=0;i<n;i++)
		b[i]=a[i];

	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%5d",b[i]);
	
	return 0;
}

