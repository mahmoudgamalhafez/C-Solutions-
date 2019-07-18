#include <stdio.h>
#define LEN 100
int main()
{
	char terminating_point,input;
	char ch[LEN];
	int i=0,j,k;
	printf("Enter a sentence: ");
	while((input=getchar())!='\n'){
		if(input=='?'||input=='!'||input=='.'){
			terminating_point=input;
			break;
		}
		ch[i]=input;
		i++;
	}
	printf("Reversal of a sentece: ");
	j=i;
	while(i>=0){
		while(ch[j]!=' '&&j!=0)
			j--;
		for(k=j;k<=i;k++)
			putchar(ch[k]);
		i=j;
	}
	printf("%c",terminating_point);
}