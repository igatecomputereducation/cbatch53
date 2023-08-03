#include<stdio.h>
int main()
{
	int n,f,x;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	printf("Find what:");
	scanf("%i",&f);
	
	for(x=0;n!=0;n=n/10)
	{
		if(n%10==f)
			x=x+1;
	}
	
	if(x==0)
		printf("Not existed");
	else
		printf("%i times existed",x);
	
	return 0;
}
