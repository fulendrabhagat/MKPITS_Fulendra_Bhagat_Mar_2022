/*Write a C program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s=0,t=0;
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
        if (a[i]==5 && a[i+1]==5) 
        {
            s=1;
        }
        else 
		if(a[i]==3 && a[i+1]==3)
        {
            t=1;
        }
    }
    
    if(t==1 || s==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

