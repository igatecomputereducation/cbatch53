#include<stdio.h>
int main()
{
	int len,bre,area,peri;
	len=15;
	bre=10;
	area=len*bre;
	peri=2*(len+bre);
	printf("Area of rectangle %i\n",area);
	printf("Perimeter of rectangle %i",peri);
	return 0;
}
