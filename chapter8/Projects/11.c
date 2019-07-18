#include <stdio.h>
#include <ctype.h>
int main()
{
	char phone_numeric[15],ch;
	int i=0;
	printf("Enter phone number");
	while ((ch = toupper(getchar())) != '\n')
    {
        switch (ch)
        {
            case 'A': case 'B': case 'C':
                phone_numeric[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                phone_numeric[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                phone_numeric[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                phone_numeric[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                phone_numeric[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                phone_numeric[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                phone_numeric[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                phone_numeric[i] = '9';
                break;
            default:
                phone_numeric[i] = ch;
        }
        i++;
    }
	printf("\nIn numeric number ");
	for(i=0;i<15;i++)
		printf("%c",phone_numeric[i]);
	}
