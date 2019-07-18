#include <stdio.h>
#include <math.h>
#define epsilon .00001 
int main()
{
	int number ;
	double y=1 ,average;	
	printf("Enter a positve number : ");
	scanf("%d",&number);
	do{
		average=(y+number/y)/2;
		if(fabs(y-average)>epsilon)
			y=average;
		else
			break;
	}while(1);
	printf("Square root: %.8f\n\n", average);
}