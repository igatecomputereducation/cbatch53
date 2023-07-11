#include<stdio.h>
int main()
{
	int bre,wid,hei;
	printf("Enter 3 sides of a shape\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	if(bre==wid)
	{
		if(wid==hei)
			printf("Cube");
		else
			printf("box");
	}
	else
		printf("box");
	
	return 0;
}
