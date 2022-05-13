#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,n1,n2;
	printf("Enter First number : ");
	scanf("%d",&n1);
	
	printf("Enter Second Number  : ");
	scanf("%d",&n2);
	
	sum=n1+n2;
	
	if(sum>=10 && sum<=20)
	{
		printf("number is in range ");
		
	}
	else
	{
		printf("Number is not in range ");
	}
	printf("\nsum=%d",sum);
}
