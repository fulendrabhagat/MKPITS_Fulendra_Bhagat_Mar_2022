#include<stdio.h>
#include<conio.h>
int main()
{
	float s=0,j=1,d,i;
	printf("s : s=1+ 3/2 + 5/4 + 7/8 \n");
	for(i=1;i<=7;i=i+2)
	{
		d=i/j;
		s=s+d;
		j=j*2;
	}
	printf("value of s= %.2f",s);
}

