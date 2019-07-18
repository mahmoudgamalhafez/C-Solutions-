#include <stdio.h>
int main()
{
	/*
	int num_1,num_2,GCD,i;
	 i =1;
	 int j=0;
	printf("Enter two numbers: ");
	scanf("%d %d",&num_1,&num_2);
	while(i<=num_1&&i<=num_2){
		if(num_1==1||num_2==1){
			GCD=1;
			break;
		}
		else if(num_1%i==0&&num_2%i==0)
			GCD=i;
		i++;
		j++;
	}
	printf("Greatest common divsior : %d %d",GCD,j);
	*/
	 int m, n, remainder;

    printf("\nEnter two integers: ");
    scanf("%d %d", &m, &n);

    do
    {
        remainder = m % n;
        m = n;
        n = remainder;
		
    } while (n != 0);

    printf("Greatest common divisor: %d %d\n\n", m );
}