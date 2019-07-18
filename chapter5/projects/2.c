#include <stdio.h>
int main()
{
	int hour ,mins;
	printf("Enter a 24 hour time: ");
	scanf("%d:%d",&hour ,&mins);
	if(hour==24){
		printf("Equivalent 12 hour time: 00: %.2d AM",mins);
	}	
	else if(hour>=12&& hour<24){
		hour-=12;
		printf("Equivalent 12 hour time: %d : %.2d PM",hour,mins);
	}
	else if(hour>0&&hour<12)
		printf("Equivalent 12 hour time: %d : %.2d AM",hour,mins);
	else
		printf("Not right clock");
		
}