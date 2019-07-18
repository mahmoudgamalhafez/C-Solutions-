/* Suppose that high, low and middle are all pointer variables of the same type,
 and that low and high point to elements of an array. What is the following statement illegal, 
 and how could it be fixed?
middle = (low + high) / 2;
*/
/* 
	Answer:illegal because pointers can not be added to each other 
			middle =(high-low)/2+low
*/