#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter INTERGER: ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Error Message\n");
	}
	else if(num>=80)
	{
		printf("Error Message\n");
	}
	else
	{
		printf("COORECT VALUE");
	}
}
