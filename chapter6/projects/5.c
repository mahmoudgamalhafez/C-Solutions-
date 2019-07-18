#include <stdio.h>
int main()
{
	int num ;
	printf("Enter a two digit number: ");
	scanf("%d",&num);
	printf("The reversal is: ");
    do
    {
        printf("%d", num % 10);
        num = num/10;
	}while(num!=0);
}