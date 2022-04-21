#include<stdio.h>
#include<conio.h>

int main()
{
	int n,sum=0,t,r;
	
	printf("enter any number");
	scanf("%d",&n);
	
	for(t=n;n>0;)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(t==sum)
	{
		printf("Number is palindrom");
	}
	else
	{
		printf("Number is not palindrom");
	}
}

