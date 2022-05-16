/*Write a C program to create a new array of length 3 from a given 
array (length atleast 3) containing the elements from the middle of the array.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n],b[3];
	printf("Enter the array : \n");
	for( i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}	
	b[0]=a[2];
	b[1]=a[3];
	b[2]=a[4];
	for( i=0;i<3;i++)
	{
		printf("%d ",b[i]);
	}
	
	
}

