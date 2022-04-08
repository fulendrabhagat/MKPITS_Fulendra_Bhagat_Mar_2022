#include<stdio.h>
#include<conio.h>
int main()
{
	int months;
	printf("ENTER MONTH NUMBER: ");
	scanf("%d",&months);
	
	switch(months)
	{
		case 1:
			printf("January");
			break;
		
		case 2:
		 printf("February");
		 break;
		 
		 	case 3:
		 printf("March");
		 break;
		 
		 case 4:
		 printf("april");
		 break;
		 
		 case 5:
		 printf("May");
		 break;
		 
		 case 6:
		 printf("June");
		 break;
		 
		 case 7:
		 printf("July");
		 break;
		 
		 case 8:
		 printf("August");
		 break;
		 
		 case 9:
		 printf("September");
		 break;
		 
		 case 10:
		 printf("OCTOMBER");
		 break;
		 
		 case 11:
		 printf("NOVEMBER");
		 break;
		 
		 case 12:
		 printf("December");
		 break;
		 
		 default:
		 	printf("NO month Present");
		 	break;
		 
	}
}
