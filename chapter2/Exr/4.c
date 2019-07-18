#include<stdio.h>
int main()
{
	int a,b,c;
	float d,e,f;
	printf("a=%d\tb=%d\tc=%d\t",a,b,c);
	printf("d=%f\te=%f\tf=%f\t",a,b,c);
}

/* here is no pattern for the first few integers produced
, however, upon repeated compilations and repeated tests,
 the last two integers and all floats are usually 0  or
 0.000000, with occasional deviation to "random" garbage values. 
*/