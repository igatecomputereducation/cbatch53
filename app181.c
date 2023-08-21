#include<stdio.h>
int main()
{
	int a[50][50],n,i,j,sum;
	
	printf("Enter the dimension of square matrix:");
	scanf("%i",&n);
	
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Diagonal elements\n");
	sum=0;
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i][i]);
		sum=sum+a[i][i];
	}
	
	printf("\nTrace of matrix %d",sum);
	return 0;
}
