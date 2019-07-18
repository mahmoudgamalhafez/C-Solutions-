#include<stdio.h>
int main()
{
	int r ;
	printf("Enter radius ");
	scanf("%d",&r);
	float volume ;
	volume = (4.0f /3.0f)*r*r*r *3.14 ;
	printf("Sphere volume =%f",volume);
}