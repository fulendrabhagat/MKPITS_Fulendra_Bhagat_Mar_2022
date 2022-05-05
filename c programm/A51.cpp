#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter any two no  ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping=\n%d\n%d",a,b);
	   
}
