#include<stdio.h>
int main()
{
	int a[50],i,n,es,os;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(es=0,os=0,i=0;i<n;i++)
	{
		if(a[i]%2==0)
			es=es+a[i];
		else
			os=os+a[i];
	}
	
	printf("Even numbers sum %d\n",es);
	printf("Odd numbers sum %d",os);
	return 0;
}



