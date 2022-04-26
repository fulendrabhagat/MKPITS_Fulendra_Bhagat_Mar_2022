#include<stdio.h>
#include<conio.h>
int main()
{
	char name[10];
	int i;
	printf("Enter Name : >");
	
	scanf("%s",&name);
	for(i=0;i<=10;i++)
	{
		printf("%c",name[i]);
	}
}
