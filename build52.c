#include<stdio.h>
int main()
{
	char gen;
	int age;
	float per;
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	if(gen=='f' && age>=35 && age<=45 && per>=60)
		printf("selected");
	else
		printf("Not selected");
	return 0;
}
