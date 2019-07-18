#include <stdio.h>
int main()
{
	int num ;
	printf("Enter a two digit number: ");
	scanf("%d",&num);
	printf("\n%d%d",num%10,num/10);
}