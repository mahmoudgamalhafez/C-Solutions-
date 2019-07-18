#include<stdio.h>
int main()
{
	printf("%6d,%4d", 86, 1040);
	printf("\n%12.5e", 30.253);
	printf("\n%.4f", 83.162);
	printf("\n%-6.2g", .0000009979);
}
/*
output :
-------------
   86,1040 
3.02530e+001
83.1620
1e-006  
-------------
Notes :- 
%g and %G are simplifiers of the scientific notation floats %e and %E. 

%g will take a number that could be represented as %f (a simple float or double) or %e (scientific notation) and return it as the shorter of the two.

The output of your print statement will depend on the value of sum.

This has far been the most apt explanation I found.
*/