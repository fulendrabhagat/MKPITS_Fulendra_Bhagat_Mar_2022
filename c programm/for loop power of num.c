#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,pwr=1;
	
	printf("enter x and y");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++)
	{
		pwr=pwr*x;
	}
	printf("x to the power y is %d",pwr);
}

