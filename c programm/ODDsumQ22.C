#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,oddsum=0;
	printf("Enter value of a :");
	scanf("%d",&a);
	
	printf("\nEnter value of b :");
	scanf("%d",&b);
	
	printf("\nEnter value of c :");
	scanf("%d",&c);
	
	printf("\nEnter value of d :");
	scanf("%d",&d);
	
	printf("\nEnter value of e :");
	scanf("%d",&e);
	
	if(a%2!=0)
	{
		oddsum=oddsum+a;
	}
	if(b%2!=0)
	{
		oddsum=oddsum+b;
	}
	if(c%2!=0)
	{
		oddsum=oddsum+c;
	}
	if(d%2!=0)
	{
		oddsum=oddsum+d;
	}
	if(e%2!=0)
	{
		oddsum=oddsum+e;
	}
	else
	{
		printf("error");
	}
	printf("Sum of ODD Number =%d",oddsum);
	
}
