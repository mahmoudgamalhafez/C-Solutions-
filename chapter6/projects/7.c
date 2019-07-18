#include <stdio.h>
int main()
{
	int month_days,starting_day,i,day;
	printf("\nEnter number of days in month: ");
    scanf("%d", &month_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);
    printf("\n");
	  for (day = 1, i = 1; day <= month_days; day++, i++)
    {

        if (i < starting_day)
        {
            printf("   ");
            day--;
        }
        else if (i % 7 == 0)
        {
            printf("%2d ", day);
            printf("\n");
        }
        else
            printf("%2d ", day);
    }

    printf("\n\n");

    return 0;

}