#include<stdio.h>
int main()
{
	int i,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	
	printf("Upper limit:");
	scanf("%i",&ul);
	
	i=ll;
	while(i<=ul)
	{
		printf("%i\n",i);
		i++;
	}
	
	return 0;
}
