/*Write a C program to create a new array swapping the first and 
last elements of a given array of integers and length will be least 1*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter the size of an array : \n");
	scanf("%d",&n);
	if(n>=1)
	{
		int a[n],t;
		printf("Enter the array : \n");
		for( i=0;i<n;i++)
		{
			printf("Enter the element : ");
			scanf("%d",&a[i]);
		}	
		t=a[0];
		a[0]=a[n-1];
		a[n-1]=t;
		printf("New array after swapping is : ");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	
	}
	else
	{
		printf(" please enter the size of array greater than 1.");
	}
}

