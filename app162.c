#include<stdio.h>
int main()
{
	int a[50],i,n,f,flag;
	
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Find what:");
	scanf("%i",&f);
	
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==f)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
		printf("Existed");
	else
		printf("Not existed");
		
	return 0;
}



