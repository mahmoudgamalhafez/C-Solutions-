#include <stdio.h>
int main()
{
	int a[10];
	*a=0;
	*(a+1)=20;
	printf("%d %d",a[0],a[1]);
}