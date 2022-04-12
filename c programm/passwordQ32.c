#include<stdio.h>
#include<conio.h>
int main()
{
	int  x;
	int y=12345;
	printf("Enter password :");
	scanf("%d",&x);
	
	if(x!=y)
	{
		printf("PASSWORD IS INCORRECT");
	}
	else
	{
		printf("PASSWORD IS CORRECT");
	}
}
