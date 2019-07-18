#include <stdio.h>
int main()
{
	double n ,sum=0;
	printf("Enter a series of double values : ");
	printf("Enter 0 to terminate");
	scanf("%f",&n);
	while(n!=0){
		sum+=n;
		scanf("%f",&n);
	}
	printf("The sum is : %f\n",sum);
	return 0;
}