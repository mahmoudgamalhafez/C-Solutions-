/* The following (rather confusing) function finds the median of three numbers.
 * Rewrite the function so that it has just one return statement.
 *
 * double median(double x, double y, double z);
 * {
 *   if (x <= y)
 *     if (y <= z) return y;
 *     else if (x <= z) return z;
 *     else return x;
 *   if (z <= y) return y;
 *   if (z <= z) return x;
 *   return z;
 * }
 */
#include<stdio.h>
double median(double x, double y, double z)
{	
	double median;
	if((x<y&&x>z)||(x<z)&&(x>y))
		median=x;
	else if((y>x&&y<z)||(y<x&&y>z))
		median=y;
	else 
		median =z;
	if(x==y||x==z)
		median=x;
	if(y==z)
		median=y;
	return median;	
}
int main(void)
{
    printf("\nMedian: %lf\n\n", median(10, 25, 10));
    return 0;
}
