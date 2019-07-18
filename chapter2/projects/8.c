#include<stdio.h>
int main()
{
	float loan_amount,rate, monthly_payment,balance;
	printf("Enter amount of loan:");
	scanf("%f",&loan_amount);
	printf("\nEnter interst rate:");
	scanf("%f",&rate);
	printf("\nEnter monthly payment:");
	scanf("%f",&monthly_payment);
	loan_amount+=(loan_amount*rate/(100*12))-monthly_payment;
	printf("\nBalance remaining after first month:%.2f",loan_amount);
	loan_amount+=(loan_amount*rate/(100*12))-monthly_payment;
	printf("\nBalance remaining after second month:%.2f",loan_amount);
	loan_amount+=(loan_amount*rate/(100*12))-monthly_payment;
	printf("\nBalance remaining after third month:%.2f",loan_amount);
}