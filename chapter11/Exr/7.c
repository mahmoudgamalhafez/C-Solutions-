/* Write the following function:
 *
 * void split_date(int day_of_year, int year,
 *                 int *month, int *day);
 *
 * day_of_year is an integer between 1 and 366, specifying a particular day
 * within the year designated by year. month and day point to variables in which
 * the function will store the equivalent month (1-12) and day within that month
 * (1-31).
 */
#include <stdio.h>
#include <stdbool.h> 
void split_date(int day_of_year, int year,int *month, int *day)
{
	bool is_leapyear;
	int i, month_days[12] = { /* Jan Feb Mar Apr May Jun */
                                 31, 28, 31, 30, 31, 30,
                              /* Jul Aug Sep Oct Nov Dec */
                                 31, 31, 30, 31, 30, 31 };
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		is_leapyear=true;
	else
		is_leapyear=false;
	if(is_leapyear==true)
		month_days[1]=29;
	for(i=0;i<12;i++){
		if(day_of_year-month_days[i]<0){
			*month=i+1;
			*day= day_of_year;
			break;
		}
		day_of_year-=month_days[i];
	}
	
}
i