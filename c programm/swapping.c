#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int a,b,c;
 	printf("enter the value of a and b");
 	scanf("%d%d",&a,&b);
 	c=a;
 	a=b;
 	b=c;
 	printf("swapping of number is %d %d",a,b);
 }
