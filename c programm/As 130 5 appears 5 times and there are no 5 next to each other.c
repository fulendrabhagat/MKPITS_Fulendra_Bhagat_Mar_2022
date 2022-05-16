/*Write a C program to check a given array of integers and return true if 
the value 5 appears 5 times and there are no 5 next to each other.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,b=0,c=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i] == 5 && !b) 
        {
            c=c+1;
            b=1;
        }
        else
        {
            b=0;
        }
    }
    
    if(c==5)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
