/* Rewrite the fact function so that it's no longer recursive. */
#include <stdio.h>
int fact(int n)
{
	int i,fact;
	fact=1;
	if(n<=1)
		return 1;
	for(i=1;i<=n;i++)
		fact*=i;	
	return fact;
}
int main()
{
	printf("%d",fact(3));
}