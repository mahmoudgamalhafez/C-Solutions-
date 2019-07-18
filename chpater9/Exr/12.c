/* Write the following function:
 *
 * double inner_product(double a[], double b[], int n);
 *
 * The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].
 */
 
 double inner_product(double a[], double b[], int n)
 {
	 int i;
	 double sum_of_product;
	 sum_of_product=0;
	 for(i=0;i<n;i++)
		 sum_of_product+=a[i]*b[i];
	 return sum_of_product;
 }