#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("INPUT CO-ORDINATE X,Y : ");
	
	printf("\nenter x :");
	scanf("%d",&x);
	
	
	printf("\nenter y : ");
	scanf("%d",&y);
	
	if(x>0 && y>0)
	{
		printf("Quadrant 1 (++)");
	}
	else if(x<0 && y>0)
	{
		printf("Quadrant 2 (-+)");
	}
	else if(x<0 && y<0)
	{
		printf("Quadrant 3 (--)");
		
	}
	else
	{
		printf("Quadrant 4 (+-)");
	}
}
