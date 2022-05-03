#include<stdio.h>
#include<conio.h>
void func();
int main()
{
	func();
}
void func()
{
	int month;
	printf("Enter any Month Number  from 1 to 12 : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		printf("January");
		break;
		
		case 2:
		printf("February");
		break;
		
		case 3:
		printf("March");
		break;
		
		case 4:
		printf("April");
		break;
		
		case 5:
		printf("May");
		break;
		
		case 6:
		printf("June");
		break;
		
		case 7:
		printf("July");
		break;
		
		case 8:
		printf("August");
		break;
		
		case 9:
		printf("September");
		break;
		
		case 10:
		printf("Octomber");
		break;
		
		case 11:
		printf("November");
		break;
		
		case 12:
		printf("December");
		break;
		
		
	}
}
