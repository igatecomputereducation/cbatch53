#include<stdio.h>
int main()
{
	int a[50],i,n,j,temp;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	printf("The reverse array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
		
	return 0;
}



