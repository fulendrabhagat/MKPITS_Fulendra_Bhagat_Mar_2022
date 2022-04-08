#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,p;
	printf("\nEnter first number: ");
	scanf("%f",&a);
	
	printf("\nEnter second numner :");
	scanf("%f",&b);
	
	printf("\nEnter third number :");
	scanf("%f",&c);
	
	if(a<(b+c) && b<(c+a) && c<(a+b))    
	{
		p=a+b+c;
		printf("\nperimeter of triangle=%.1f",p);                            //perimrt of triangle    
	}
	else
	{
		printf("NO traiangle form");
	}
}
