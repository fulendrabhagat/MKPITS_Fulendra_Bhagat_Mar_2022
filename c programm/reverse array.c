#include<stdio.h>
int main()
{
	int a[4],i;
	printf("Enter 5 element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array element are :> ");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

