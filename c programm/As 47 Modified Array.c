#include<stdio.h>
#include<conio.h>
void main()
{
	int n [5],i,t;
	
	for(i=0; i<5; i++) 
	{	
		printf("Enter Number :> ");
		scanf("%d",&n[i]);
	}

	for(i=0; i<5; i++) 
	{
		if( i<(5/2) ) 
		{
			t = n[i];
			n[i] = n[5-(i+1)];
			n[5-(i+1)] = t;
		}
	}

	for(i=0; i<5; i++) 
	{
		printf("n[%d] = %d\n", i, n[i]);
	}
} 
