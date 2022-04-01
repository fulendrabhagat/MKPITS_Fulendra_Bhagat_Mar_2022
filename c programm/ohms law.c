#include<stdio.h>
#include<conio.h>
int main()
{
	//ohms law v=i*r
	int i,r,v;
	printf("enter the current and resistanc : ");
	scanf("%d%d",&i,&r);
	v=i*r;
	printf("voltage=%d",v);
}
