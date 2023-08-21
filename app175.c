#include<stdio.h>
int main()
{
	int a[3][4]={{10,20,30,40},{11,22,33,44},{10,11,12,13}};
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%5i",a[i][j]);
		printf("\n\n");
	}

	return 0;
}
