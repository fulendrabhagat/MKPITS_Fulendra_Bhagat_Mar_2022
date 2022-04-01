#include<stdio.h>
#include<conio.h>
 int main()
 {
 	// relativde frequecy =subgroup/total frequency
 	// where f=subgroup frequecy, n=total frequency
 	
 	int f,n,rf;
 	printf(" enter the f and n");
 	scanf("%d%d",&f,&n);
 	rf=f/n;
 	printf("relative frequency=%d",rf);
 }
