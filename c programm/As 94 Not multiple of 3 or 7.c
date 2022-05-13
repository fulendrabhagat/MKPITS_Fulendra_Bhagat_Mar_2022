#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	if(n%3==0 && n%7==0)
	{
		printf("not multiple of 3 or 7");
	}
	else
	if(n%3==0)
	{
		printf("Multiple of 3 ");
	}
	else if(n%7==0)
	{
		printf("Multiple of 7 ");
	}
	else
	{
		printf("Not multiple of 3 or 7");
	}
}
