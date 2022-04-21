#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m;
	
	printf("Enter number :");
	scanf("%d",&m);
	
	for(i=1;i<=m;i++)
	{
		if(i%2==0)
		{
			printf("%d",i*i);
		}
	}
}

