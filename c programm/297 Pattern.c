#include <stdio.h>  
#include<conio.h>  
void main()  
{  
    int a=1;
	int i,k,j;  
    
    for( i=3;i>=1;i--)  
    {  
        for(j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for( k=1;k<=a;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        a++;  
    }  
}
