#include <stdio.h>  
#include<conio.h>  
int main()  
{  
    int a=1;
	int i,j,k;  
    
    for(i=3;i>=1;i--)  
    {  
        for(j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(k=1;k<=a;k++)  
        {  
            printf("%d",a);  
        }  
        printf("\n");  
        a++;  
    }  
}

