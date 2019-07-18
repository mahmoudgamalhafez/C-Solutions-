#include <stdio.h>
int main()
{
	float amount,amount_tax;
	printf("Enter an amount:");
	scanf("%f",&amount);
	amount_tax=amount+amount*.05;
	printf("\namount with tax added : $%.2f",amount_tax);
}