#include <stdio.h>
void pay_amount(int ,int*,int*,int*,int*);
int main()
{
	int money,twenties,tens,ones,fives ;
	printf("Enter dollar amount: ");
	scanf("%d",&money);
	pay_amount(money,&twenties,&tens,&fives,&ones);
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$50 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);
	
}

void pay_amount(int dollars,int *twenties,int* tens,int* fives,int *ones)
{
	*twenties=dollars/20;
	dollars -= 20 * (dollars/20);
	*tens=dollars/10;
	dollars -= 10 * (dollars/10);
	*fives=dollars/5;
	dollars -= 5 * (dollars/5);
	*ones=dollars;
}