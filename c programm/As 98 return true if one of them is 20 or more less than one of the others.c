
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,res1,res2,res3;
	printf("Enter 1st Number ");
	scanf("%d",&n1);
	printf("Enter 2nd Number ");
	scanf("%d",&n2);
	printf("Enter 3rd Number ");
	scanf("%d",&n3);
	
	res1=n1-n2;
	res2=n1-n3;
	res3=n2-n3;	

	if(res1>=20)
	{
		printf("True");
	}
	else
	if(res2>=20)
	{
		printf("True");
	}
	else
	if(res3>=20)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}



}

