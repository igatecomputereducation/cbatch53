#include<stdio.h>
int main()
{
	int a,b,c;
	a=10<20 || 40>20 && 10<=5;
	b=10<20 && 20!=30 || 10>20;
	c=!(10>20) && 40>20;
	printf("%i\n%i\n%i",a,b,c);
	return 0;
}
