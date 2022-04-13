#include<stdio.h>
#include<conio.h>
int main()
{
	int n,ams=0,r,t;
	printf("Enter Any Number: ");
	scanf("%d",&n);
	
	t=n;
	
	while(n>0)
	{
		r=n%10;
		ams=ams+(r*r*r);
		n=n/10;
		
	}
	if(t==ams)
	{
		printf("AMSTRONG NUMBER");
	}
	else
	{
		printf("NOT AMSTRONG NUMBER");
	}
}
