/* Write functions that return the following values. (Assume that a and n are
 * parameters, where a is an array of int values and n is the length of the
 * array.)
 *
 * (a) The largest element in a.
 * (b) The average of all elements in a.
 * (c) The number of positive elements in a.
 */
 #include <stdio.h>
 # define N ((int)sizeof(arr)/sizeof(arr[0]))
 int largest(int arr[],int );
 int average(int arr[],int N);
 int Numer_of_Positive(int [],int );
 int main()
 {
	 
 }
int largest(int arr[],int n)
{
	int i,largest;
	largest=arr[0];
	for(i=0;i<n;i++){
		if(largest<arr[i])
			largest=arr[i];
	}
	return largest;
}
int average(int arr[],int n)
{
	int i,sum;
	sum=0;
	for(i=0;i<n;i++)
		sum+=arr[i];
	return sum/n;
}
int Numer_of_Positive(int arr[],int n)
{
	int i,number_Postives;
	number_Postives=0;
	for(i=0;i<n;i++){
		if(arr[i]>-1)
			number_Postives++;
	}
	return number_Postives;
}