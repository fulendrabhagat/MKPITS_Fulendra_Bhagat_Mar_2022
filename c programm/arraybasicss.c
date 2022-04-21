#include<stdio.h>
#include<conio.h>
int main()
{
	int num[10];
	int i;
	printf("enter the 10 number : ");
	for(i=0;i<10;i++)
	{
		printf("num[%d]= ",i);
		scanf("%d",&num[i]);
	}
	printf("array");
	for(i=0;i<10;i++)
	{
		printf("\nnum[%d]=%d",i,num[i]);
	}
}
