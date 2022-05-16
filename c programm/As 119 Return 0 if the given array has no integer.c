/*Write a C program to compute the sum of values in a given array 
of integers except the number 17. Return 0 if the given array has no integer.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n,sum=0;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
		if(a[i]!=17)
		{
			sum=sum+a[i];	
		}
	}
	printf("sum of given array except 17 is : %d",sum);
}

