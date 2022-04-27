#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[32];
	printf("enter the upper case string\n");
	scanf("%s",&name);
	
	printf("\n lower case string %s",strlwr(name));
}
