#include <stdio.h>
#include <stdbool.h>
int main()
{
	int	 digit_Repeated[10]={0};
	int i ,digit;
	long number ;
	printf("Enter a number : ");
	scanf("%ld",&number);
	while(number>0){
		digit =number %10;
		digit_Repeated[digit]++;
		number/=10;
	}
	printf("\nDigit:     ");
	printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9");
	printf("\nOccurrences:");
	for(i=0;i<10;i++){
		printf("\t%d ",digit_Repeated[i]);
	}
	printf("\n");
	return 0;
}