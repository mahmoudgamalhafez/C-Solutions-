#include <stdio.h>
#include <ctype.h>
#define N ((int)(sizeof(message) / sizeof(message[0])))
int main()
{
		char message[100],i,input;
		printf("Enter a message: ");
		for(i=0;i<N;i++){
			switch(input = toupper(getchar())){
				case 'A':
					message[i]='4';
					break;
				case 'B':
					message[i]='8';
					break;
				case 'E':
					message[i]='3';
					break;
				case 'I':
					message[i]='1';;
					break;
				case 'O':
					message[i]='0';
					break;
				case 'S':
					message[i]='5';
					break;
				default:
					message[i] = input;
					
			}	
			 if (input == '\n')
				break;
		}
		printf("In B1FF Speak: ");
		for (i = 0; i < N; i++)
		{
			if (message[i] == '\n')
				break;
			putchar(message[i]);
		}
		printf("!!!!!!!!!!");
		
		return 0;
}