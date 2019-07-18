/* Write the following function:
 *
 * float compute_GPA(char_grades[], int n);
 *
 * The grades array will contain letter grades (A, B, C, D, or F, either
 * upper-case or lower-case); n is the length of the array. The function should
 * return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1, and
 * F = 0).
 */
#include <stdio.h>
#include <ctype.h>
#define LEN ((int)sizeof(arr)/sizeof(arr[0]))
float compute_GPA(char[], int );
int main()
{
	
}
float compute_GPA(char grades[], int n){
	int i ,total_grade;
	total_grade=0;
	for(i=0;i<n;i++){
		switch(toupper(grade[i])){
			case 'A':
				total_grade+=4;
				break;
			case 'B':
				total_grade+=3;
				break;
			case 'C':
				total_grade+=2;
				break;
			case 'E':
				total_grade+=1;
				break;
			case 'F':
				break;
			default:
				printf("Wrong Grade ");
				break;
		}
	}
	return total_grade/n;
}