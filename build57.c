#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter 3 integers\n");
	scanf("%i%i%i",&a,&b,&c);
	
	if(a==b && b==c)	
		printf("Equals");
	if(a>b && a>c)
		printf("Biggest number %i",a);
	if(b>a && b>c)
		printf("Biggest number %i",b);
	if(c>a && c>b)
		printf("Biggest number %i",c);
	
	return 0;
}
