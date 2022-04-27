#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name[20];
	printf("Enter name : ");
	scanf("%s",name);
	
	printf("%s",strupr(name));
}
