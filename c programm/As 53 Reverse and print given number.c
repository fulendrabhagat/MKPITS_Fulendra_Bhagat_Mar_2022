#include<stdio.h>
#include<conio.h>
int main()
{
	
	
	int n,sum=0;
	int r;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
			}
			printf("%d",sum);
}
