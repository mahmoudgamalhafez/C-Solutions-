#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int num_of_vowels=0;
	printf("Enter a sentence : ");
	while((ch=getchar())!='\n'){
		switch(toupper(ch)){
			case 'A' : case 'E' :case 'I' :
			case 'O' :case 'U' :
				num_of_vowels++;
		}
	}
	printf("Your sentence contain %d vowels:",num_of_vowels);
}