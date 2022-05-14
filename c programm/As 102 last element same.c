
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,i;
	printf("Enter Size Of 1st Array \n");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("Enter Size Of 2nd Array \n");
	scanf("%d",&m);
	
	int b[m];
	for(i=0;i<m;i++)
	{
		printf("Enter 2nd Array element : ");
		scanf("%d",&b[i]);
	}
	
	if(a[0]==b[0] && a[n-1]==b[m-1])
	{
		printf("True !");
	}
	else
	{
		printf("False !");
	}
}

