#include <stdio.h>
int main()
{
	int day,month,year ;
	int earliest_day,earliest_month,earliest_year;
	printf("Enter first date(mm/dd/year):");
	scanf("%d/%d/%d",&month,&day,&year);
	earliest_day=day;
	earliest_month=month;
	earliest_year=year;
	while(1){
		printf("\nEnter first date(mm/dd/year):");
		scanf("%d/%d/%d",&month,&day,&year);
		if(year==0&&day==0&&month==0)
			break;
		if(earliest_year==year){
			if(earliest_month==month)
				if(earliest_day==day)
					continue;
				else if(earliest_day>day)
					earliest_day=day;
			else if(earliest_month>month)
				earliest_month=month;
				earliest_day=day;
		}
		else if(earliest_year>year){
			earliest_year=year;
			earliest_day=day;
			earliest_month=month;
		}
		
	}
	printf("%.2d/%.2d/%.2d is the earliest date",earliest_month,earliest_day,earliest_year);
}