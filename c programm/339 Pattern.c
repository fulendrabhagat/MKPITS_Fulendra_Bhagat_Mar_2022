#include<stdio.h> 
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
        {
          printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
}
