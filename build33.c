#include<stdio.h>
int main()
{
	float price,bill,dis,nbill;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	if(bill>=10000)
		dis=bill*5/100;
	if(bill<10000)
		dis=bill*2/100;
	nbill=bill-dis;	
	printf("Total bill %.2f\n",bill);
	printf("discount %.2f\n",dis);
	printf("Net bill %.2f",nbill);
	return 0;
}
