#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,ser,f=0;
	
	printf("Enter number :");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Number you want to search ");
	scanf("%d",&ser);
	
	for(i=0;i<5;i++)
	{
		if(a[i]==ser)
		{
			f=1;
		}
		
		}
		if(f==1)
		{
			printf("present");
		}
		else
		{
			printf("not present");
		}
	}


