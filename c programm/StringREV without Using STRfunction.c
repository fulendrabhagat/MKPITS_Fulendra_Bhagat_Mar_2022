#include<stdio.h>
#include<conio.h>

int main()
{
	char n[20];
	int i;
	int cnt=0;
	
	printf("Enter The String : ");
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++)
	{
		cnt=cnt+1;
	}
	for(i=cnt-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}
}
