/* For each of the following declarations, identify the storage class, type qualifiers, type specifiers, declarators and initializers.

(a) static char **lookup(int level);
(b) volatile unsigned long io_flags;
(c) extern char *file_name[MAX_FILES], path[];
(d) static const char token_but[] = "";
*/

/*
	Answer : 
		a- 
			storage class: static
			type qualifiers: -
			type specifiers:char **
			declarators: lookup(int level)
			initializers:- -
		
		b-
			storage class: -
			type qualifiers:volatile
			type specifiers:unsigned long 
			declarators: io_flags
			initializers:- -
		
		c-
			storage class: extern
			type qualifiers:none
			type specifiers: char*[]
			declarators:  file_name,path
			initializers:- -
		
		d-
			storage class: static
			type qualifiers:const
			type specifiers: char[]
			declarators:  token_but
			initializers:""
 */