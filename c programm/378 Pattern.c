#include<stdio.h>
#include<conio.h> 
void main()
{
        int i,j;
        
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4-i;j++)
            {
                printf("  ");
            }
            for(j=i;j>0;j--)
            {
                printf(" %c",j+64);
            }
            for(j=2;j<=i;j++)
            {
                printf(" %c",j+64);
            }
            printf("\n");
        }
}
