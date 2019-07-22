/*
Let f be the following function. What will be tha value of f(10) if
f has never been called before? What will be the value of f(10) if f has been called five times previously?

int f(int i)
{
    static int j = 0;
    return i * j++;
}
*/
/*
	- 0 ,j=1
	-10,j=2
	-20,j=3
	-30,j=4
	-40,j=5
	-50,j=6
	Answer:-
		50
*/
