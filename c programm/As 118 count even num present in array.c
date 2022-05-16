/*Write a C program to count even number of elements in a given array of integers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n],count=0;
	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}
	}
	printf("Even no in given array is : %d",count);	
}

