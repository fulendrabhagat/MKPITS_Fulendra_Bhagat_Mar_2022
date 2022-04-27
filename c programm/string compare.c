#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[12],s2[12];
	printf("enter the first string\n");
	scanf("%s",&s1);
	
	printf("enter second string");
	scanf("%s",&s2);
	printf("string compare %d",strcmp(s1,s2));
}
