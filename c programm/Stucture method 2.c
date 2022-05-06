#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
	
};

int main()

{

struct student s1;
{

printf("Enter student ID : ");
scanf("%d",&s1.id);
printf("Enter student Name : ");
scanf("%s",&s1.name);

printf("student id=%d",s1.id);
printf("student name = %s",s1.name);
}
}

