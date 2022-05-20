/*Write a C program to check if the value of each element is equal or greater than 
the value of previous element of a given array of integers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i + 1] < a[i]) 
        {
            f=0;
        }
    }
    
    if(f==0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
