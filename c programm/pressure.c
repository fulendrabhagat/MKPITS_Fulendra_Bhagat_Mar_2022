#include<stdio.h>
#include<conio.h>
int main()
{
	//formula of pressure
	int force,accel,pressure;
	printf("Enter the FORCE AND ACCELARATION : ");
	scanf("%d%d",&force,&accel);
	pressure=force*accel;
	printf("pressure = %d",pressure);
	
	
}
