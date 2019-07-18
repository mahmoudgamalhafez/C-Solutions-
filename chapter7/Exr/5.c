/* Which one of the following is not a legal way to write the number 65?
 * (Assume the character set is ASCII.)
 * (a) 'A'
 * (b) 0b1000001
 * (c) 0101
 * (d) 0x41
 */
#include <stdio.h>

int main(void)
{
    int a = 'A';
    int b = 0b1000001;
    int c = 0101;
    int d = 0x41;

    printf("\nA: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    printf("D: %d\n\n", d);

    return 0;
}
 /* 
 answer : B binary are not standard C .
 gcc supports them so this works and compile . 
 */