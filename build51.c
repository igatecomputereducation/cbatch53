#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35 && phy>=35 && che>=35)
		printf("pass");
	else
		printf("Failed");
	return 0;
}
