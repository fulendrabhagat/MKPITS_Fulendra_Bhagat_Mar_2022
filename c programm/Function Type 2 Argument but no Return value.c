#include<stdio.h>
#include<conio.h>
void fun();
void data(int x, int y);
void main()
{
	fun();
}
void fun()
{
	int a,b;
	printf("Enter Value Of a and b :");
	scanf("%d %d",&a,&b);
	data(a,b);
	
}
void data(int x,int y)
{
	int r;
	r=x*y;
	printf("%d",r);
}
