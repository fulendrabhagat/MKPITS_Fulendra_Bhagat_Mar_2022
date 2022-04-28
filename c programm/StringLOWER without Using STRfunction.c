#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  	char n[20];
  	int i;
 
  	printf("Enter Upper Case String : ");
  	scanf("%s",n);
  	
  	for (i=0;n[i]!='\0';i++)
  	{
  		if(n[i]>='A' && n[i]<='Z')
  		{
  			n[i]=n[i]+32;
		}
  	}
	printf("lower String %s",n);
}

