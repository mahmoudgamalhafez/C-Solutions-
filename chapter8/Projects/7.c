#include <stdio.h>
int main()
{
	int arr[5][5],
		row_sum[5]={0},
		column_sum[5]={0},
		i,j,k;
	for(i=0;i<5;i++){
		printf("Enter row number %d:  ",i+1);
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			row_sum[i]+=arr[i][j];
			column_sum[i]+=arr[j][i];
		}
	}
	printf("Row totats: ");
	for(i=0;i<5;i++)
		printf("%d ",row_sum[i]);
	printf("\nColumn totats: ");
	for(i=0;i<5;i++)
		printf("%d ",column_sum[i]);
	
}