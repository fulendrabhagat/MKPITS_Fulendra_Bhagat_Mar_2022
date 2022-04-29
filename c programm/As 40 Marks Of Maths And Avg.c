#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[100],m,i,a=0,t=0;
	float f;
	printf("Enter Maths marks :> ");
	for(i=0;marks[i]!='\0';i++)
	{
		scanf("%d",&marks[i]);
		
		if(marks[i]<=0)
		{
			break;
		}
		a++;
		t=t+marks[i];
	}
	f=t/a;
	printf("Average = %f\n",f);
}

