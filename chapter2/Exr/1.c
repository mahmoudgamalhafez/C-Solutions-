#include<stdio.h>
int main()
{
	printf("hello,world");
}
/* no warning in  gcc  version 6.2.0
	but in version 7.2.0 waraning that 
	control reaches end of non void 
	function "main" .
	solution to put return 0 at the end
 */ 