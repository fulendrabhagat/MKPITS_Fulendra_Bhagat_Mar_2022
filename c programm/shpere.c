#include<stdio.h>
#include<conio.h>
 
void main()
{
	// volume of sphere 4/3 pi*r*r*r
	float r,sphere;
	float pi=3.147;
	printf("enter the radius of shpere  :");
	scanf("%f",&r);
	sphere=4*pi*r*r*r/3;
	printf("Volume of Sphere = %f",sphere);
	
}
