#include <stdio.h>
int main()
{
	int day,month ,year,item_number;
	float price ;
	printf("Enter item number: ");
	scanf("%d",&item_number);
	printf("\nEnter unit price: ");
	scanf("%f",&price);
	printf("Enter purchase date(mm/dd/yyyy):  ");
	scanf("%d/ %d/ %d",&month,&day,&year);
	printf("\tItem\tUnit\tPurchase");
	printf("\n\t\tPrice\tDate");
	printf("\n\t%d\t%.2f\t",item_number,price);
	printf("%.2d/%.2d/%.4d",month,day,year);
}