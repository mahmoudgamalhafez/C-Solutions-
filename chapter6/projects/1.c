#include <stdio.h>
int main()
{
	int num ,max;
	max=0;
	while(1){
		printf("Enter a number : ");
		scanf("%d",&num);
		if(num==0)
			break;
		if(max<num)
			max=num;
	}
	printf("The largest number you entered was %d",max);
	return 0;
}