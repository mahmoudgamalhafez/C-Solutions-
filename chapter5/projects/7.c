#include <stdio.h>
int main()
{
	int num_1,num_2,num_3,num_4,largest,smallest;
	printf("Enter four numbers : ");
	scanf("%d %d %d %d",&num_1,&num_2,&num_3,&num_4);
	largest=num_1;
	smallest=num_1;
	/* to find largest number*/
	if(largest<num_2)
		largest=num_2;
	if(largest<num_3)
		largest=num_3;
	if(largest<num_4)
		largest=num_4;
	/* to find smallest number*/
	if(smallest>num_2)
		smallest=num_2;
	if(smallest>num_3)
		smallest=num_3;
	if(smallest>num_4)
		smallest=num_4;
	printf("largest:%d",largest);
	printf("\n smallest:%d",smallest);
	
	
}