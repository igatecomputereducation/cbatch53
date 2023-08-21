#include<stdio.h>
int main()
{
	int a[50],n,i,pos;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Position:");
	scanf("%d",&pos);
	
	if(pos<1 || pos>n)
		printf("Invalid position");
	else
	{
		pos--;
		
		for(i=n-1;i>=pos;i--)
			a[i+1]=a[i];
			
		printf("Enter the element to insert:");
		scanf("%d",&a[pos]);
		
		n++;
		
		printf("Result array\n");
		for(i=0;i<n;i++)
			printf("%5d",a[i]);
	}
	return 0;
}





