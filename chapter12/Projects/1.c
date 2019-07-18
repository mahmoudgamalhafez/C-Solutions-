#include <stdio.h>
#define MAX 100
/* a*/
/*
int main()
{
	char input , ch[MAX];
	int i=0;
	printf("Enter a message: ");
	while(((input=getchar())!='\n')&&i<MAX){
		ch[i]=input;
		i++;
	}
	printf("\nReversal is: ");
	
	while(i>=0){
		putchar(ch[i-1]);
		i--;
	}
	
}
*/
/* b-*/
int main()
{
	char input , ch[MAX],*p;
	p=&ch[0];
	printf("Enter a message: ");
	while(((input=getchar())!='\n')){
		*p=input;
		p++;
	}
	printf("\nReversal is: ");
	
	while(p>=&ch[0]){
		putchar(*p);
		p--;
	}
	
}