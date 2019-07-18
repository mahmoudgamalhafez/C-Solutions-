/* Write the following function:
 *
 * void find_two_largest(const int *a, int n, int *largest,
 *                       int *second_largest);
 *
 * a points to an array of length n. The function searches the array for its
 * largest and second largest elements, storing them in variables pointed to by
 * largest and second_largest, respectively. Use pointer arithmetic--not
 * subscripting--to visit array elements.
 */

void find_two_largest(const int *a, int n, int *largest,int *second_largest)
{
	int i,*p ;
	*largest=*a;
	for(p=a+1;p<a+n;p++){
		if(*largest<*p)
			*largest=*p;
	}
	*second_largest=*a;
	for(p=a+1;p<a+n;p++){
		if(*second_largest<*p && *p!=largest)
			*second_largest=*p;
	}
}