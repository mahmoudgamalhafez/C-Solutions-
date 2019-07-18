#include <stdio.h>
int main()
{
	int numerical_grade;
	printf("Enter numerical_grade: ");
	scanf("%d",&numerical_grade);
	if(numerical_grade<0||numerical_grade>100)
		printf("\n error");
	else if(numerical_grade<60)
		printf("Letter Grade : F");
	else if(numerical_grade<70)
		printf("Letter Grade : D");
	else if(numerical_grade<80)
		printf("Letter Grade : C");
	else if(numerical_grade<90)
		printf("Letter Grade : B");
	else if(numerical_grade<100)
		printf("Letter Grade : A");
		
}