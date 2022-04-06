#include<stdio.h>
#include<conio.h>
int main()
{
	 float w1, w2, nop1, nop2, average;
	 
    printf("Weight of item1: ");
    
    scanf("%f", &w1);
    
    printf("\nWeight of item2: ");
    scanf("%f", &w2);
    
    printf("\nNo. of item1 purchases: ");
    scanf("%f", &nop1);
    
    printf("\nNo. of item2 purchases: ");
    scanf("%f", &nop2);
    
    average = ((w1 * nop1) + (w2 * nop2)) / (nop1 + nop2);
    
    printf("\n Average value = %f", average);

}

