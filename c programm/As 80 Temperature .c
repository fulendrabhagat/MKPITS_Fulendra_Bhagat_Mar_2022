#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter temperature : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Temperature is less then 0");
	}
	else
	if(n>100)
	{
		printf("Temperature is greater then 100");

	}
	else
	{
		printf("It is  not in range in 0 and 100");
	}
}

