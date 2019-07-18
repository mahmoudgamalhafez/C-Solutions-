/* Write a function gcd(m, n) that calculates the greatest common divisor of the
 * integers m and n. (Programming Project 2 in Chapter 6 descripes Euclid's
 * algorithm for computing the GCD.)
 */
 int GCD(int m,int n)
 {
	int remaider;
	do{
		 remaider=m%n;
		 m=n;
		 n=remaider;
	}while(n!=0);
	return m;
 }