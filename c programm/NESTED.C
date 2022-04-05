#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=65)
		{
		printf("GRADE A");
		
	}
	   else if(marks>=45)
	{
		printf("GRADE B");
		
		
	}
	else if(marks>=35)
	{
		printf("GRADE C");
		
	}
	else if(marks>=30)
	{
		printf("GRADE D");
		
	}
	else
	{
		printf("FAILED");
	}
}
