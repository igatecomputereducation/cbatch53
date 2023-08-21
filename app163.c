#include<stdio.h>
int main()
{
	int a[50],i,n,f,r;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Find what:");
	scanf("%d",&f);
	
	printf("Replace with:");
	scanf("%d",&r);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==f)
			a[i]=r;
	}
		
	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
		
	return 0;
}



