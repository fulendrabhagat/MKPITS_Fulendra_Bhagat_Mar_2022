
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter Size Of Array \n");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Array element : ");
		scanf("%d",&a[i]);
	}
	
	if(a[0]==a[n-1])
	{
		printf("True !");
	}
	else
	{
		printf("False !");
	}
}
