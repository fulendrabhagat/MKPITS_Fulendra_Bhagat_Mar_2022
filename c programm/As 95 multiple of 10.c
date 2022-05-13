#include<stdio.h>
#include<conio.h>
int main()

{
	int n;
	printf("Enter Any Number ");
	scanf("%d",&n);
	
	if(n%10<=2 || n%10>=8)
	{
		printf("Within the to of multiple of 10");
	}
	else
	{
		printf("Not Within the to of multiple of 10");
	}
}

