#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,m,temp;
	printf("enter number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
		
	}
	
	printf("sum =%d",sum);
}
