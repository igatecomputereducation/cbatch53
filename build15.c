#include<stdio.h>
int main()
{
	int amt,time;
	float rate,si,tot;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Rate of intrest:");
	scanf("%f",&rate);
	printf("Time in months:");
	scanf("%i",&time);
	si=amt*time*rate/100;
	tot=amt+si;
	printf("\nAmount %i\n",amt);
	printf("Simple intrest %.2f\n",si);
	printf("Total amount to pay %.2f",tot);
	return 0;
}
