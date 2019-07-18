#include <stdio.h>
#include <ctype.h>
#define MAX 100
/* a
int main()
{
	char ch[MAX],input;
	int i=0,j=0;
	printf("Enter a message: ");
	while(((input=getchar())!='\n')){
		input=toupper(input);
		if(input>='A' && input<='Z'){
			ch[i]=input;
			i++;
		}
	}
	printf("\n");
/*	while(k<i){
		putchar(ch[k]);
		k++;
	}
	printf("\n");
	*/
	//i--;
/*	while(i>=j){
		if(ch[i]!=ch[j]){
			printf("Not a palindrome");
			return 0;
		}
		j++;
		i--;
	}
	printf("palindrom");
}
*/
/* b*/
int main()
{
	char ch[MAX],input,*p,*m;
	p=m=&ch[0];
	printf("Enter a message: ");
	while(((input=getchar())!='\n')){
		input=toupper(input);
		if(input>='A' && input<='Z'){
			*p=input;
			p++;
		}
	}
	printf("\n");

	p--;
	while(p >= m){
		if(*p!=*m){
			printf("Not a palindrome");
			return 0;
		}
		p--;
		m++;
	}
	printf("palindrom");
}