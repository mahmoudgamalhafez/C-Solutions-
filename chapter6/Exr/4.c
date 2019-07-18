#include <stdio.h>

int main(void)
{
    int i;

    printf("\nA: ");
    for (i = 0; i < 10; i++)
        printf("\n%d", i);

    printf("\nB: ");
    for (i = 0; i < 10; ++i)
        printf("\n%d", i);

    printf("\nC: ");
    for (i = 0; i++ < 10; )
        printf("\n %d", i);

    printf("\n\n");

    return 0;
}
/* 
Answer:
C is not equivelent  
as in A and B it checks the condition prints i then increase i so prints 0-9
in c it checks then increses  i then prints from 1- 10

*/