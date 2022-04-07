#include <stdio.h>
#include<conio.h>
int main()
 {
	int sec, hour, minute, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	hour = (sec/3600); 
	
	minute = (sec -(3600*hour))/60;
	
	s = (sec -(3600*hour)-(minute*60));
	
	printf("H:M:S - %d:%d:%d\n",hour,minute,s);
	

}

