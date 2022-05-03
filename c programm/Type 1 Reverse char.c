#include<stdio.h>
#include<conio.h>
void func();
int main()
{
	func();
}
void func()
{
		char a;
	char b;
	char c;
		printf("Enter any three character ");
	scanf("%c%c%c",&a,&b,&c);
	
	printf("The reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);
}

