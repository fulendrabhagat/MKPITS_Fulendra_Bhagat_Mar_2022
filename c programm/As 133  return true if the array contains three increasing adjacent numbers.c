/*Write a C program to check a given array of integers and return true 
if the array contains three increasing adjacent numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t=0;
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
        if (a[i]==a[i + 1]-1 && a[i]==a[i+2]-2) 
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
}
