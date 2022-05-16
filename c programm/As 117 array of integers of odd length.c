/*Write a C program to find the largest value from first, last, 
and middle elements of a given array of integers of odd length (at least 1)*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	if(n%2!=0 && n>=1)
	{
		int a[n],t;
		printf("Enter the array : \n");
		for( i=0;i<n;i++)
		{
			printf("Enter the element : ");
			scanf("%d",&a[i]);
		}	
		t=a[0];
		if(t<a[n-1])
		{
			t=a[n-1];
		}
		int mid=n/2;
		if(t<a[mid])
		{
			t=a[mid];
		}
		printf("largest element of a given array is : %d", t);
	
	}
	else
	{
		printf(" please enter the size of array greater than 1.");
	}
}

