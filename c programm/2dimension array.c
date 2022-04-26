#include<stdio.h>
#include<conio.h>
int main()
{
	int m[2][2];
	int i,j;
	printf("Enter 3*3 Matrix ");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m[%d][%d]=",i,j,m[i][j]);
			
		}
	}
}
