#include<stdio.h>
#include<conio.h>
void pelo();
int main()
{
	pelo();
	
}
void pelo()
{

	int n,rev=0,rem,org;
	printf("ENTER NUMBER :");
	scanf("%d",&n);
	org=n;
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		rem=rem/10;
	}
	if(rev==org)
	{
		printf("pelidrome number");
	}
	else
	{
		printf("not pelidrome");
	}
}
