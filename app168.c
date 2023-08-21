#include<stdio.h>
int main()
{
	int a[50],n,i;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter element to append:");
	scanf("%d",&a[n]);
	
	n++;
	
	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
		
	return 0;
}



