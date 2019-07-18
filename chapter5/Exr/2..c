/* The following program fragments illustrate the relational and
 * equality operators. Show the output produced by each, assuming that
 * i, j, and k are int variables.
 * (a) i = 10; j = 5;
 *     printf("%d", !i < j);
 * (b) i = 2; j = 1;
 *     printf("%d", !!i + !j);
 * (c) i = 5; j = 0; k = -5;
 *     printf("%d", i && j || k);
 * (d) i = 1; j = 2; k = 3;
 *     printf("%d", i < j || k);
 */
 
 /* 
 Answer : 
	a- 1 
	    (!i)<j
	
	b-  1
		((!(!i))+(!j))
	c-	1
		((i&&j)||k)
	d-	1
		(i<j)||k
 */