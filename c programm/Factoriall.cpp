#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	
	i=num;
	
	while(i>=1)
	{
		fact=fact*i;
		
		i--;
	}
	printf("factorial of number is =%d",fact);
}
