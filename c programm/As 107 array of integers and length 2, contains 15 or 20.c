
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[2],x=0;
	printf("array");
	
	for(i=0;i<2;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for( j=0;j<2;j++)
	{
		if(a[j]==15 || a[j]==20)
		{
			printf("True !");
			x=1;
			break;
		}
	}
	if(x==0)
	{
		printf("False !");
	}
	
}

