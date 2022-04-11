#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("Enter Two Pair Value : \n");
	scanf("%d%d",&x,&y);
	
	if(x!=y)
	{
		if(y>x)
		{
			printf("Ascendingg order\n");
		}
		else
		{
			printf("Descending order\n");
		}
	}
}
