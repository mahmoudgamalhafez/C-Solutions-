#include <stdio.h>
int main()
{
	int a;
	short b;
	long c;
	float d;
	double e;
	long double f;
	printf("size of int : %d",sizeof(a));
	printf("\nsize of short : %d",sizeof(b));
	printf("\nsize of long : %d",sizeof(c));
	printf("\nsize of float : %d",sizeof(d));
	printf("\nsize of double : %d",sizeof(e));
	printf("\nsize of long double : %d",sizeof(f));
}