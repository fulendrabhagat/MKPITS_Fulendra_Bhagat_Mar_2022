#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[34],s2[34];
	printf("enter the string\n");
	gets(s1);
	strcpy(s2,s1);
	printf("\n copy string is %s",s2);
}
