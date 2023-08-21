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
		printf("Element is %d",a[pos]);
	}
	return 0;
}





