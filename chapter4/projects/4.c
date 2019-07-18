#include <stdio.h>
int main()
{
	int num ,D1,D2,D3,D4,D5;
	printf("Enter number between 0 and 32767: ");
	scanf("%d",&num);
	D1=num%8;
	num/=8;
	D2=num%8;
	num/=8;
	D3=num%8;
	num/=8;
	D4=num%8;
	num/=8;
	D5=num%8;
	printf("In octal your number is : %d%d%d%d%d",D5,D4,D3,D2,D1);
}