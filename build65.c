#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%i",&age);
	if(age>=60)
		printf("senior adult");
	else if(age>=40)
		printf("Middle aged adult");
	else if(age>=20)
		printf("Adult");
	else if(age>=13)
		printf("youth");
	else if(age>=5)
		printf("Child");
	else if(age>=2)
		printf("Toddler");
	else
		printf("Infant");
	return 0;
}
