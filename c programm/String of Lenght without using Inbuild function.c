#include<stdio.h>
#include<string.h>
int main()
{
char n1[10]; 
int i,cnt=0;
printf(" enter any name");
 scanf("%s",&n1);

for(i=0;n1[i]!='\0';i++) 
{
cnt=cnt+1;
 }

printf("length=%d" ,cnt);
}
