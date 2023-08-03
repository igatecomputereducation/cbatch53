#include<stdio.h>
int main()
{
	int n,rev,t;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	t=n;
	for(rev=0;t!=0;t=t/10)
		rev=rev*10+t%10;
	
	if(n==rev)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
		
	return 0;
}
