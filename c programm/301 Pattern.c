#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",(char)(i+64));
        }
        printf("\n");        
    }
}
