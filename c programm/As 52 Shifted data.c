#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter any Number : ");
	scanf("%d",&a);
	
	a<<=2;
	b=a;
	
	printf("Left shifted data=%d",b);
}
