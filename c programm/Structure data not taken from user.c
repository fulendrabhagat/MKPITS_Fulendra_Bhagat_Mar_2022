#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[29];
	
};

int main()

{
	struct student s1={23,"fulendra"};
	
		printf("Student id=%d",s1);
		printf("Student name=%s",s1);
	
}
