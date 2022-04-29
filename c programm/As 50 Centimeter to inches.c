#include<stdio.h>
#include<conio.h>
int main()
{
	float c,i;
	printf("Enter distance in Centimeter : ");
	scanf("%f",&c);

	i=c/2.54;

	printf("Distance of %f= %f inch",c,i);
}
