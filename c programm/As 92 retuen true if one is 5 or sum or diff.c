#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,diff,num1,num2;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	
	printf("Enter Second Number : ");
	scanf("%d",&num2);
	 
	 sum=num1+num2;
	 
	 diff=num1-num2;
	 
	 if(num1==5 || num2==5 || sum==5 || diff==5)
	 {
	 	printf("True !");
	 }
	 else
	 {
	 	printf("False ");
	 }
}
