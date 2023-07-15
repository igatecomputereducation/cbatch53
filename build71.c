#include<stdio.h>
int main()
{
	float price,dis,nbill,bill;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	dis=(bill>=1000)?bill*5/100:bill*2/100;
	nbill=bill-dis;
	printf("Total bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
	return 0;
}
