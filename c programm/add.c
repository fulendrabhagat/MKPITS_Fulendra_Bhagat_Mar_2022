#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,n3,add; 
	printf("Enter thr three digit number : ");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	add=n1+n2+n3;
	printf("addition = %d",add);
}
