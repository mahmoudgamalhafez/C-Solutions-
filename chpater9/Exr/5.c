/* Write a function num_digits(n) that returns the number of digits in n
 * (a positive integer). Hint: To determine the number of digits in a number n,
 * divide it by 10 repeatedly. When n reaches 0, the number of divisions
 * indicates how many digits n originally had.
 */
int num_digits(long num)
{
	int digits;
	do{
		num/=10;
		digits++;
	}while(num=0);
	return digits;
}