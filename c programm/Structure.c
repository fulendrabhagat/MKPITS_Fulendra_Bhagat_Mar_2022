#include<stdio.h>
#include<conio.h>
 struct student
 {
 	int id;
 	char name[30];
 	
 } s1;
 void main()
 {
 	printf("Enter Student ID :");
 	scanf("%d",&s1.id);
 	
 	printf("Enter Student Name : ");
 	scanf("%s",&s1.name);
 	
 	printf("\nStudent Id=%d",s1.id);
 	printf("\nStudent Name=%s",s1.name);
 }
