/*Write a C program to check a given array of integers, 
length 3 and create a new array. If there is a 5 in the 
given array immediately followed by a 7 then set 7 to 1.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[3];
	
	for(i=0;i<3;i++)
	{
		printf("Enter Array element : ");
		scanf("%d",&a[i]);	
	}
	for(i=0;i<3;i++)
	{
		if(a[i]==5 && a[i+1]==7)
		{
		a[i+1]=1;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i]);	
	}
}
