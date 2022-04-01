#include<stdio.h>
#include<conio.h>
int main()
{
	// area of semicircle  a=1/2*pi*r*r
	
	float pi=3.14,r,area;
	printf("enter the redius :");
	scanf("%f",&r);
	area=0.5*(pi)*(r*r);
	printf("AREA OF SRMICIRCLE=%f ",area);
}
