#include <stdio.h>
int main()
{
	float x=5664.444 ;
	printf("%8.1e",x);
	printf("\n%-10.6e",x);
	printf("\n%8.3f",x);
	printf("\n%-6.0f",x);
}