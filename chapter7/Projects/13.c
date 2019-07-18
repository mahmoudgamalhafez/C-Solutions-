#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	float num_of_words=0;
	float num_of_chars=0;
	printf("Enter a sentence : ");
	while((ch=getchar())!='\n'){
		if(ch==' '||ch=='.')
			num_of_words++;
		else
			num_of_chars++;
	}
	printf("Average word length:%.2f",num_of_chars/num_of_words);
}