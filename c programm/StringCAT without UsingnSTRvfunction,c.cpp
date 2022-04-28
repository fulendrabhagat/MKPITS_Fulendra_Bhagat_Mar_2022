#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  	char n1[20],n2[20];
  	int i,j;
 
  	printf("Enter 1st string : ");
  	scanf("%s",n1);
  	
  	printf("Enter 2nd String : ");
  	scanf("%s",n2);

  	for (i=0;n1[i]!='\0';i++);

 	
  	for (j=0;n2[j]!='\0'; j++,i++)
  	{
  		n1[i]=n2[j];
  	}
  	n1[i]='\0';

  	printf("%s",n1);
}
