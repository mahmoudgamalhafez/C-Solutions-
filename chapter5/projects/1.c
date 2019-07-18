#include <stdio.h>
int main() 
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num<10 && num>=0)
		printf("the number %d has 1 digit",num);
	else if(num>=10 && num<100 )
		printf("the number %d has 2 digit",num);
	else if (num>=100 && num<1000)
		printf("the number %d has 3 digit",num);
	else if (number >= 1000 && number <10000)
		printf("the number %d has 4 digit",num);
	
}
