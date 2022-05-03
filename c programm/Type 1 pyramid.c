#include<stdio.h>
#include<conio.h>
void func();
int main()
{
	func();
}
void func()
{
		int r,spc,str;
	for(r=1;r<=10;r++)
	{
		for(spc=1;spc<=41-r;spc++)
		{
			printf(" ");
		}
		
			for(str=1;str<=r;str++)
			{
				printf(" *");
			}
			printf("\n");
		}
}
