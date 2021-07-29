#include<stdio.h>
int main()
{
	int yr, given_yr=1900, rem_yr, leap_yr, day, total_days;
	
	printf("Enter the year\n");
	scanf("%d",&yr);
	
	yr=(yr-1)-given_yr;
	
	leap_yr=yr/4;
	
	rem_yr=yr-leap_yr;
	
	
	total_days=(rem_yr*365)+(leap_yr*366)+1;
	
	day=total_days%7;
	
	if(day==0)
	  printf("Monday");
	else if(day==1)
	  printf("Tuesday");
	else if(day==2)
	  printf("Wednesday");
	else if(day==3)
	  printf("Thursday");
  	else if(day==4)
	  printf("Friday");
 	else if(day==5)
	  printf("Saturday");
	else if(day==6)
	  printf("Sunday");
	  
	else
	  printf("Wrong Entry");
	  
        return 0;

}
