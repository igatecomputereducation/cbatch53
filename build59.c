#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 integers\n");
	scanf("%i%i%i",&a,&b,&c);
	if(a==b && b==c)
		printf("Equals");
	else
	{
		if(a<b && a<c)
			printf("Smallest number %i",a);
		else
		{
			if(b<c)
				printf("Smallest number %i",b);
			else
				printf("Smallest number %i",c);
		}
	}
	return 0;
}
