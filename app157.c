#include<stdio.h>
int main()
{
	int a[50],i,n;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("The given elements\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	
	return 0;
}
