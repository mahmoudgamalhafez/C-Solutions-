/* 
The following function is supposed to print an error message. Each message is preceded by an integer, indicating the number of times the function has been called. Unfortunately, the function always displays 1 as the number of the error message. Locate the error and show how to fix it without making any changes outside the function.

void print_error(const char *message)
{
    int n = 1;
    printf("Error %d: %s\n", n++, message);
}
*/
/* 
	static int n = 1;
*/