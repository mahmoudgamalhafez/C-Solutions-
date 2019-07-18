#include <stdio.h>
int main()
{

	int m, n, remainder,GCD,reg;
    printf("\nEnter a fraction: ");
    scanf("%d/%d", &m, &n);
	GCD=m;
	reg=n;
    do
    {
        remainder = GCD % reg;
        GCD= reg;
        reg = remainder;
		
    } while (reg != 0);
	if(n/GCD==1)
		printf("In lowest terms : %d \n\n", m/GCD );
	else
		printf("In lowest terms : %d /%d\n\n", m/GCD,n/GCD );
}