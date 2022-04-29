#include<stdio.h>
#include<conio.h>
int main()
{
	int d,i;
	printf("Enter number : >");
	scanf("%d",&d);
	
	printf("Divisor are %d",d);
	
	for(i=1;i<=d;i++)
	{
		if((d%i)==0)
		{
			printf("\n%d",i);
			
			printf("\n");
		}
		
	}
}

