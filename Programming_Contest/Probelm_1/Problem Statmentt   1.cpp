#include<stdio.h>
#include<conio.h>
int main()
{
	int n,start,end,len;
	int i,j;
	
	printf("Enter the Number :> ");
	scanf("%d",&n);
	

	
	len=2*n-1;
	start=0;
	end=len-1;
	int a[len][len];
	
	while(n!=0)
	{
		for(i=start;i<=end;i++)
		{
			for( j=start;j<=end;j++)
			{
				if(i==start || i==end || j==start || j==end)
				{
					a[i][j]=n;
				}
			}
		}
		++start;
		--end;
		--n;
	}
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("  \n");
	}
	
	}
