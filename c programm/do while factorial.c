#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter number :>");
	scanf("%d",&n);
	i=n;
	do
	{
		fact=fact*i;
		i--;
	}
	while(i>=1);
	printf("factorial is %d",fact);
}
