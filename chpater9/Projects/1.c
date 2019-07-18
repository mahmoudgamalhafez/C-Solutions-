/*selection sort recursevily */
#include <stdio.h>
#define LEN ((int)sizeof(a)/sizeof(a[0]))
void selection_sort(int [] ,int );
int main()
{
	int a[10]={2,4,6,7,8,9,10,1,0,5};
	int i;
	selection_sort(a,LEN);
	for(i=0;i<LEN;i++)
		printf("%d ",a[i] );
}
/*
	selection_sort: takes an array of n numberds 
					search for the largest element ,move it to the last elment 
					call it self to recursevily to sort first n-1 .
*/
void selection_sort(int a[] ,int n)
{
	int i,largest,temp;
	largest=0;
	if(n==0)
		return ;
	for(i=1;i<n;i++){
			if(a[largest]<a[i]){
				largest=i;
			}
	}
	temp=a[largest];
	a[largest]=a[n-1];
	a[n-1]=temp;
	selection_sort(a,n-1);
	
}