/*
Def: finding biggest number
author: subbu
version: 1.0
Date Dev: 07/08/2023
Loc: TCS, Bangalore
*/

#include<stdio.h>
int main()
{
	/*declaration*/
	int x,y;
	
	//taking data from the keyboard
	printf("Enter 2 integers\n");
	scanf("%i%i",&x,&y);
	
	//logic to print biggest number
	if(x==y)
		printf("Equals");
	else if(x>y)
		printf("Biggest number %i",x);
	else
		printf("Biggest number %i",y);
	return 0;
}

