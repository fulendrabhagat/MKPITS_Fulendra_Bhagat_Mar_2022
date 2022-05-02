#include<stdio.h>
#include<conio.h>
 void arth();
 int main()
 {
 	arth();
 }
 void arth()
 {
 	int a,b;
 	printf("ENTER value of a and b :");
 	
 	scanf("%d%d",&a,&b);
 	
 	printf("Addition = %d\n",a+b);
 	
 	printf("Multiplication = %d\n",a*b);
 	
 	printf("Division = %d\n",a/b);
 	
 	printf("Substraction = %d\n",a-b);
 	
 	printf("Reminder = %d",a%b);
 }
