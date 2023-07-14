#include<stdio.h>
int main()
{
	int n,fi,se,th;
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	if(fi==se && se==th)
		printf("All digits are equal");
	else
	{
		if(fi>se && fi>th)
			printf("Biggest digit %i",fi);
		else
		{
			if(se>th)
				printf("Biggest digit %i",se);
			else
				printf("Biggest digit %i",th);
		}
	}
	return 0;
}
