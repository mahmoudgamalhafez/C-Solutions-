#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    char input, first_name_letter = 0;
    int space = FALSE;

    printf("\nEnter a first and last name: ");

    while ((input = getchar()) != '\n')
    {
        if (!first_name_letter)
        {
            if (input != ' ' ||input!='\t')
                first_name_letter = input;
        }
        else if (space == FALSE)
        {
            if (input == ' ')
                space = 1;
        }
        else if (input != ' ')
            putchar(input);
    }
	printf(", %c.\n\n", first_name_letter);

    return 0;
}

