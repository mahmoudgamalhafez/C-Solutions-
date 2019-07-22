/* 
List the storage duration (static or automatic), scope (block or file) and linkage (internal, external or none) of each variable and parameter in the following file:

extern float a;

void f(register double b)
{
    static int c;
    auto char d;
}
*/
/* 
	Answer:-	
		a static storage duration - file scope - undetermind
		b automatic storage duration -block scope - no linkage
		c static storage duration-block scope-no linkage
		d automatic storage duration-block scope-no linkage
*/