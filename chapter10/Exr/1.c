/*The following program outline shows only function definitions and variable
declarations.

int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}

For each of the following scopes, list all variables and parameter names
visible in that scope:
(a) The f function
(b) The g function
(c) The block in which e is declared
(d) The main function
*/
/*
	Answer:
		a-a,c,b
		b-d,a
		c-e,a,d
		d-f,a
*/