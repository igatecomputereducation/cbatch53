#include<stdio.h>
int main()
{
	int a[50],i,n,sum;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(sum=0,i=0;i<n;i++)
		sum=sum+a[i];
		
	printf("Sum of all the elements %d",sum);
	return 0;
}
