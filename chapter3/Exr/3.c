#include <stdio.h>
int main()
{
	float x ;
	scanf("%f ",&x);
	scanf("%f",&x);
	printf("\n%f",x);
}
/*
(a), (b) and (d) are equivalent, because the scanf function matches 
zero or more whitespace characters on each whitespace character,
except the final character, as shown in (c).
(c) is not equivalent because the trailing space will require 
the user to input a non-whitespace character at the end of the input signifying 
the end of the whitespace sequence matched by the space.
*/