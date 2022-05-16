
   
/*Write a C program to check a given array of integers and return true 
if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2.*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,x=0,y=0;
	
	printf("Enter Size Of Array  less than 3 \n");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(j=0;j<n;j++)
	{
		if(a[j]==10)
		{
			x=x+1;
		}
		if(a[j]==20)
		{
			y=y+1;
		}
	}
	if(x==2 || y==2)
	{
		printf("True !");
	}
	else
	{
		printf("False !");
	}
	
}
