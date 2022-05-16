/*Write a C program to compute the sum of the two given arrays 
of integers,length 3 and find the array which has the largest sum*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3],b[3];
	int sum1=0,sum2=0;
	int i;
	
	printf("Enter the 1st array : \n");
	for( i=0;i<3;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	printf("Enter the 2nd array : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&b[i]);
		sum2=sum2+b[i];
	}
	if(sum1>sum2)
	{
		printf("Largest sum array is : \n");
		for( i=0;i<3;i++)
		{
		printf("%d ",a[i]);
		}	
	}
	else
	{
		printf("Largest sum array is : \n");
		for( i=0;i<3;i++)
		{
			printf("%d ",b[i]);
		}		
	}	
}

