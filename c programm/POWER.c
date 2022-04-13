#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i,pwr=1;
	printf("Enter number :");
	scanf("%d%d",&x,&y);
	i=1;
	
	while(i<=y)
	{
		pwr=pwr*x;
		i++;
	}
	printf(" x to the power y os =%d",pwr);
}
