/*The following program outline shows only function definitions and variable declarations.

int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}
For each of the following scopes, list all variable and parameter names visible in that scope. If there's more than one variable or parameter with the same name, indicate which one is visible.

(a) The f function
(b) The g function
(c) The block in which a and d are declared
(d) The main function
*/


/* 
	Answer:
		a- b local ,d local, c global
		b- a parameter,c local, b global
		c- a local ,d local,c local,b global 
		d- c local ,d local ,b global
*/