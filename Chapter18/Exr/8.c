/*
Write a complete description of the type of x as specified by each of the following declarations.

(a) char (*x[10])(int);
(b) int (*x(int))[5];
(c) float *(*x(void))(int);
(d) void (*x(int, void (*y)(int)))(int);

*/
/* 
	Answer:-
		a-x is array of pointers to function with int argument return char type 
		b-x is function with int argument that returns pointer to array of 5 integers
		c-x is function with no argument returns pointer to fun with an int argument return a float pointer 
		d-x is function with two arguments( int &&	pointer to function with int argument and no return ) returns a pointer to function with int arg and no return .
*/