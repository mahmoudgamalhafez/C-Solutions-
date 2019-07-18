#include<stdio.h>
int main()
{
	int r =10;
	float volume ;
	volume = (4.0f /3.0f)*r*r*r *3.14 ;
	printf("Sphere volume =%f",volume)
}

/*
	writing (4.0f /3.0f) as (4/3) will return 1 
	Integer rounding error 
*/