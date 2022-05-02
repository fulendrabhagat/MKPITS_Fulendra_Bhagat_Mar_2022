#include<stdio.h>
#include<conio.h>
void prime();
int main()
{
	prime();
}
void prime()
{
	int n,i;
	printf("Enter Number :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i>n/2)
	{
		printf("\n%d Number Prime Nmuber",n);
	}
	else
	{
		printf(" \n%d Number is not Prime Number",n);
	}
}

