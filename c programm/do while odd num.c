#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1;
	do
	{
		if(i%2!=0)
		{
			printf("odd number=%d\n",i);
		}
		i++;
	}
	while(i<=50);
}
