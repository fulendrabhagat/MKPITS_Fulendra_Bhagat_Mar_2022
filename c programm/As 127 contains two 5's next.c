/*Write a C program to check a given array of integers 
and return true if the given array contains two 5's next
to each other, or two 5 separated by one element*/
#include<stdio.h>
#include<conio.h>
int main()
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
        if (a[i] ==5 && a[i+1]==5) 
        {
            s=1;
        }
        else 
		if(i+2<n && a[i]==5 && a[i+2]==5)
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
