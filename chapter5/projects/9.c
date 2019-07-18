#include <stdio.h>
int main()
{
	int day_1,month_1,year_1,day_2,month_2,year_2;
	printf("Enter first date(mm/dd/year):");
	scanf("%d/%d/%d",&month_1,&day_1,&year_1);
	printf("Enter second date(mm/dd/year):");
	scanf("%d/%d/%d",&month_2,&day_2,&year_2);
	if(year_1==year_2)
		if(month_1==month_2)
			if(day_1==day_2)
				printf("same date");
			else if(day_1>day_2)
				printf("%d/%d/%d is earlier than %d/%d/%d",month_2,day_2,year_2,month_1,day_1,year_1);
			else
				printf("%d/%d/%d is earlier than %d/%d/%d",month_1,day_1,year_1,month_2,day_2,year_2);
		else if(month_1>month_2)
			printf("%d/%d/%d is earlier than %d/%d/%d",month_2,day_2,year_2,month_1,day_1,year_1);
		else
			printf("%d/%d/%d is earlier than %d/%d/%d",month_1,day_1,year_1,month_2,day_2,year_2);
	else if(year_1>year_2)
		printf("%d/%d/%d is earlier than %d/%d/%d",month_2,day_2,year_2,month_1,day_1,year_1);
	else
		printf("%d/%d/%d is earlier than %d/%d/%d",month_1,day_1,year_1,month_2,day_2,year_2);
}