#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum,r;
	
	printf("Enter number :> ");
	scanf("%d",&n);
	
	for(sum=0;n>0;n=n/10)
	{
		r=n%10;
		sum=sum+r;
	}
	printf("add is %d",sum);
}
