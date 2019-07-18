/* Write a function digit(n, k) that returns the kth digit (from the right) in
 * n (a positive integer). For example, digit(829, 1) returns 9, digit(829, 2)
 * returns 2, and digit(829, 3) returns 8. If k is greater than the number of
 * digits in n, have the function return 0.
 */
#include <stdio.h>
int digit(int n,int k)
{
	int digit;
	do{
		digit=n%10;
		n/=10;
		k--;
		if(n==0&&k>0)
			return 0;
	}while(k!=0);
	return digit;
}
int main()
{
	int n , k,i;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("\nEnter kth number: ");
	scanf("%d",&k);
	i=digit(n,k);
	printf("\nkth digit in %d = %d",n,i);	
	 
}