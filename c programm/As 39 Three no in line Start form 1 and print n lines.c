#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j=1,l=0;
	printf("Enter number of lines ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		while(l<3)
		{
			printf("%d",j++);
			l++;
		}
		
		l=0;
		printf("\n");
	}
}
