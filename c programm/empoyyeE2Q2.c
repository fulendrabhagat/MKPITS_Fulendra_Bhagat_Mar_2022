#include<stdio.h>
#include<conio.h>

int main()
 {
	int  idnumbr;
	int hour;
	float value, salary;
	printf("enter the Employees ID : ");
	scanf("%d", &idnumbr);
	
	printf("\n enter the working hrs: ");
	scanf("%d", &hour);
	
	printf("\n Salary amount/hr: ");
	scanf("%f", &value);
	
	salary = value * hour;
	printf("\nEmployees ID = %d \nSalary =  %.2lf\n", idnumbr,salary);
	
}

