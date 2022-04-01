#include<stdio.h>
#include<conio.h>
int main()
{
	int num,rim;
	printf("enter the number : ");
	scanf("%d",&num);
	rim=num%4;
	if(rim==0)
	{
		printf(" number is divisible by 4");
	}
	if(rim!=0)
	{
		printf("number is not divisible by 4");
	}
}
