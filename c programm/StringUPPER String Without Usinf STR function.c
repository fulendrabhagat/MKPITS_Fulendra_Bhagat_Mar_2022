#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  	char n[20];
  	int i;
 
  	printf("Enter lower case string : ");
  	scanf("%s",n);
  	
  	for (i=0;n[i]!='\0';i++)
  	{
  		if(n[i]>='a'&&n[i]<='z')
  		{
  			n[i]=n[i]-32;
		}
  	}
	printf(" The upper string %s",n);
}

