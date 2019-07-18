/* The following function, which computes the area of a triangle, contains two
 * errors. Locate the errors and show how to fix them. (Hint: There are no
 * errors in the formula.)
 *
 * double triangle_area(double base, height)
 * double product; error 
 * {
 *   product = base * height;
 *   return product / 2;
 * }
 */


double triangle_area(double base,double height)
{
	double product;  
    product = base * height;
    return product / 2;
 } 
  /* answer 
	1- double height 
	2-double product should be defined inside the function 
	*/
  