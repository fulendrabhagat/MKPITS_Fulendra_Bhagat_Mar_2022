#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2,num3,rev;
	printf(" enter three digit number: ");
	scanf("%d",&num);
	num1=num%10;
	num=num/10;
	
	num2=num%10;
	num=num/10;
	
	num3=num%10;
	
	rev=num1*100+num2*10+num3*1;
	printf(" %d",rev);
	if(num=rev)
	{
		printf("number is pelindromial");
	}
	else
	{
		printf(" number is not pelidromial");
	}
}
