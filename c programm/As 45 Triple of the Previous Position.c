#include<stdio.h>
int main()
{
	int n[7],i,x;
	printf("Enter Number :> ");
	scanf("%d",&x);
	
	for(i=0;i<=7;i++)
	{
		n[i]=x;
		x=3*x;
	}
	for(i=0;i<=7;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}

