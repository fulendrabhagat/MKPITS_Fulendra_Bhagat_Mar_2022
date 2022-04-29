#include<stdio.h>
#include<conio.h>

int main()
{
	float s=0;
	float i;
	
	for(i=1;i<=20;i++)
	{
		s=s+1/i;
	}
	printf("value of s = %f",s);
}
