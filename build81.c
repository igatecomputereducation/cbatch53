#include<stdio.h>
int main()
{
	int x,ll,ul;
	
	printf("Ekkada nundi:");
	scanf("%i",&ll);
	
	printf("Ekkada varaku:");
	scanf("%i",&ul);
	
	x=ll;
	abc:
		printf("%i\n",x);
		x=x+1;
	if(x<=ul)
		goto abc;
		
	return 0;
}
