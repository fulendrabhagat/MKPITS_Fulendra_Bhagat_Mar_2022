#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6];
	int i,t,s;

	for(i=0;i<6;i++) 
	{
    	printf("Enter Number :> ");
		scanf("%d",&a[i]);
	}
	t=a[0];
	s=0;

	for(i=0;i<6;i++) 
	{
		if(a[i]<t) 
		{
			t=a[i];
			s=i;
		}
	}

	printf("Smallest Value = %d\n", t);
	printf(" a[%d] = %d\n",a[t],t);
}
