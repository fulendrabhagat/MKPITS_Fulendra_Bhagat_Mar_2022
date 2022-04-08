#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,sum=0,avg,total=0;
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
	
	if(a>0)
	{
		sum=sum+a;
	}
	if(b>0)
	{
	sum=sum+b;
	}
	if(c>0)
	{
		sum=sum+c;
	}
	if(d>0)
	{
		sum=sum+d;
	}
	if(e>0)
	{
		sum=sum+e;
	}
	avg=sum/total;
	printf("\nSum of positive  Number =%d\n",sum);
	printf("\naverage of positive number=%d",avg);
	
}
