/* Modify the find_largest function of Section 12.3 so that it uses pointer
 * arithmetic--not subscripting--to visit array elements.
 */
int find_largest(int a[], int n)
{
	int *p,largest;
	largest=a[0];
	for(p=a+1;p<a+n;p++){
		if(largest<*p)
			largest=*p;
	}
	return largest;	
}