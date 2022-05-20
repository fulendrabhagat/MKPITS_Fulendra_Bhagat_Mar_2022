#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i+1;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}
