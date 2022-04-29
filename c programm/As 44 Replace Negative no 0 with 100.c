#include<stdio.h>
#include<conio.h>
int main()
{
	int n[5],i,j;
	printf("Enter  an Element :> ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&j);
		if(j>0)
		{
			n[i]=j;
		}
		else
		{
			n[i]=100;
		}
	}
	printf("value of Array \n");
	
	for(i=0;i<5;i++)
	{
	printf("n[%d]=%d\n",i,n[i]);
}
}

