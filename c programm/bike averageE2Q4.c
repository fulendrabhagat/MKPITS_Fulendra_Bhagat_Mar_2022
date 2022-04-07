
#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	float  y;
	
	printf("Input total distance in km: ");
	scanf("%d",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f",&y);
	
	
	printf("Average of bike(km/lt) =%.2f ",x/y);


}

