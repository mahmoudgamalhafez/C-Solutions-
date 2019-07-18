#include<stdio.h>
int main()
{
	int first ,second ,third ;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d - %d",&first,&second,&third);
	printf("You Entered %.3d.%.3d.%.4d",first,second,third);
}