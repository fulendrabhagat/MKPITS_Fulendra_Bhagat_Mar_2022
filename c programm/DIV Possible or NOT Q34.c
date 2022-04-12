#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,div;
	printf("Enter two Number :");
	scanf("%d%d",&x,&y);
	
	if(y!=0)
	{
		div=x/y;
		printf("\ndivision is possible and div is %d",div);
	}
	else
	{
		printf("Division is not Possible");
	}
}
