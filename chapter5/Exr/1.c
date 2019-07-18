/*
1
	a-  i = 2; j = 3;
		k = i * j == 6;
		printf("%d", k);
		
	  Answer : k=6 
		k= ((i*j)==6);
	
	b-i = 5; j = 10; k = 1;
      printf("%d", k > i < j);
	  
	  Answer: 1
		 (k>i)<j -->> relational are left to right 
	(c) i = 3; j = 2; k = 1;
 *     	printf("%d", i < j == j < k);
		Answer : 1 
			(i<j) == (j<k) -->  equality operator == has lower precedence than relational 
 
 
	(d) i = 3; j = 4; k = 5;
		printf("%d", i % j + i < k);
		
		Answer : 0
			(((i%j) +i)<k ) % have higher precedence then + then relational < 
 */