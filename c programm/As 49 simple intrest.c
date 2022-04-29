#include<stdio.h>
#include<conio.h>
int main()
{

	int a,b,c,d;
	printf("Calculate Simple Intrest !\n");

	printf("Enter Principle : ");
	scanf("%d",&a);
	printf("Enter Rate Of Intrest : ");
	scanf("%d",&b);
	printf("Enter Time : ");
	scanf("%d",&c);

	d=(a*b*c)/100;

	printf("Simple Interest = %d",d);
}
