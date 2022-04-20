#include<stdio.h>
#include<conio.h>
int main()

{
	int i,add=0;
	i=10;
	do
	{
		add=add+i;
		printf("Addtion Of number=%d\n",add);
		i--;
	}
	while(i>=1);
	printf("add is %d",add);
}
