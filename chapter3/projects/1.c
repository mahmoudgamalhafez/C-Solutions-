#include <stdio.h>
int main()
{
	int day ,month ,year ;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("You enterd the data %.4d%.2d%.2d ",year,month,day);
}