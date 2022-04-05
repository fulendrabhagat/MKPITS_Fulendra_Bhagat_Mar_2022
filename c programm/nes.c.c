#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter value of a , b and c");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf(" a is greater",a);
	}
	
	 else if(b>a&&b>c)
	{
		printf("b is greater ",c);
		
	}
	else
	{
		printf("c is greater ",c);
	}
}

