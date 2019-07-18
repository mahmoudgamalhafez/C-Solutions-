#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool digit_seen[10]={false},
		 digit_Repeated[10]={false};
	int i ,digit;
	long number ;
	printf("Enter a number : ");
	scanf("%ld",&number);
	while(number>0){
		digit =number %10;
		if(digit_seen[digit])
			digit_Repeated[digit]=true;
		digit_seen[digit]=true ;
		number/=10;
	}
	printf("\nRepeated digit(s):");
	for(i=0;i<10;i++){
		if(digit_Repeated[i])
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}