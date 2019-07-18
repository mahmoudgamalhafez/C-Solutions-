#include <stdio.h>
int main()
{
	int num ;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
	printf("\nThe reversal is %d%d%d",num%10,num/10%10,num/100);
}