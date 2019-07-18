#include <stdio.h>
int main()
{
	int fib_numbers[40],i;
	fib_numbers[0]=0;
	fib_numbers[1]=1;
	for(i=2;i<40;i++)
		fib_numbers[i]=fib_numbers[i-1]+fib_numbers[i-2];
}