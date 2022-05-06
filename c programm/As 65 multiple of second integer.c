#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	
	printf("Check any two number they are multiple or Not \n");
	
	printf("Enter First Number : ");
	scanf("%d",&num1);
	
	printf("Enter Second Number :> ");
	scanf("%d",&num2);

	if(num1%num2==0)
	
	{
		printf("\n \n %d is Multiple Of %d",num1,num2);
	}
	
	else
	{
		printf("\n \n %d is not Multiple of %d ",num1,num2);
	}
}
