#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[13],s2[13];
	printf("enter the first string");
	scanf("%s",&s1);
	
	printf("enter the seconf string");
	scanf("%s",&s2);
	
	printf("combine string is %s",strcat(s1,s2));
}
