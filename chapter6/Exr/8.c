/* 
Answer :
		10 5 3 2 1 1 1 1 ...

*/
#include <stdio.h>

int main(void)
{
    int i;

    printf("\n");

    for (i = 10; i >1; i /= 2)
        printf("%d ", i++);

    printf("\n\n");

    return 0;
}