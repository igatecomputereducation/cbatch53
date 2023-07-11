#include<stdio.h>
int main()
{
	int len,bre;
	
	printf("Length:");
	scanf("%i",&len);
	
	printf("Breadth:");
	scanf("%i",&bre);
	
	if(len==bre)
		printf("Square");
		
	if(len!=bre)
		printf("Rectangle");
	
	return 0;
}
