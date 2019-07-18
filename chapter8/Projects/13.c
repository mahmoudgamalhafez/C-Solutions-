#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    char input, first_name_letter ;
	char last_Name[5];
	int i=0;

    printf("\nEnter a first and last name: ");
	while(((input=getchar())==' '));
	first_name_letter=input;
	while((input=getchar())!=' ');
    while ((input = getchar()) != '\n'&&i<20)
    {
        if (input != ' '){
            last_Name[i]=input;
		   	i++;
		}
    }
	for(i=0;i<10;i++){
		 if (last_name[i] == 0) break;
		printf("%c",last_Name[i]);
	}
	printf(", %c.\n\n", first_name_letter);
    return 0;
}