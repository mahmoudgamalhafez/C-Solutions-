#include <stdio.h>
int main()
{
	int number,i,square;
	i=2;
	printf("Enter a number: ");
	scanf("%d",&number);
	do{
		square=i*i;
		printf("%d\n",square);
		i+=2;
	}while(square<number);
	
}