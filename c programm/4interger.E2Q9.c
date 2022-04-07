 #include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,r,s;
	printf("Enter 1st integer :");
	scanf("%d",&p);
	
	printf("Enter 2nd integer :");
	scanf("%d",&q);
	
	printf("Enter 3rd integer :");
	scanf("%d",&r);
	
	printf("Enter 4th integer :");
	scanf("%d",&s);
	
	if((r>0) && (s>0) && (p%2==0) && (q>r) && (s>p) && ((r+s)>(p+q)))
	
	{
		printf("CORRECT VALUE\n");
		
	}
	else
	
		printf("WRONG VALUE");
	
	
}

