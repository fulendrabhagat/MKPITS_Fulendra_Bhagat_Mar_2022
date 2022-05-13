#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n%13==0 || n%13==1)
	{
		printf("Multiple of 13 ");
	}
	else
	{
		printf("Not Multiple of 13 ");
	}
}
