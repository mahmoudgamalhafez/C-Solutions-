/* Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to
 * use the pointer variable top_ptr instead of the integer variable top.
 */
 
void make_empty()
{
	top_ptr=&contents[0];
}
bool isfull()
{
	if(top_ptr==&contents[N-1])
		return true;
	else 
		return false
}
bool isEmpty()
{
	if(top_ptr==&contents[0])
		return true;
	else 
		return false
}