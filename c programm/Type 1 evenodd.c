#include<stdio.h>
#include<conio.h>
void s();
int main()
{
	s();
	
}
void s()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("number is even",num);
		
	}
	else
	{
		printf("number is odd",num);
	}
}
