 #include<stdio.h>
#include<conio.h>
int i;
struct stud
{
	int id;
	char name[30];
};
   
   void main()
   {
   	
   	struct stud s[4];
   	
   	for(i=0;i<=4;i++)
   	{
	   
   	printf("Enter the student id ");
   	scanf("%d",&s[i].id);
   	
   	printf("Enter the student name ");
   	scanf("%s",&s[i].name);
   }
     
     	for(i=0;i<=4;i++)
   {
   
   	printf("Student Id =%d\n",s[i].id);
   	printf("Student Name =%s",s[i].name);
   }
}
