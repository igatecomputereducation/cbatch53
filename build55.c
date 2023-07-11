#include<stdio.h>
int main()
{
	char gen;
	int age;
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	if(gen=='m' && age>=21 || gen=='f' && age>=18)
		printf("Major");
	else
		printf("Minor");
	return 0;
}
