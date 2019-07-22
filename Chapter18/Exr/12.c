/*
(a) Write a complete description of the type of the function f, assuming that it's declarred as follows:

int (*f(float (*)(long), char *))(double);
(b) Give an example showing how f would be called.
*/
/* 
	answer:-
	  a-
		f is a function with two arguments
		first argument
			a pointer to funtion with long argument returns float 
		second argument 	
			pointer to char 
		which returns  a pointer to function with double argument and return int type		
	  b-
		f(function_name, char_ptr);
*/