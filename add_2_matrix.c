#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the size of matrix\n");
	printf("\tEnter the ROW of an array : ");
	scanf("%d",&a);

	printf("\tEnter the COLUMN of an array : ");
	scanf("%d",&b);
	printf("\n");
	int arr[a][b],brr[a][b],sum[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Enter the element [ %d,%d ] of array : ",i,j);
			scanf("%d",&arr[a][b]);
		}
	}

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Enter the element [ %d,%d ] of array : ",i,j);
			scanf("%d",&brr[a][b]);
		}
	}

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			sum[a][b] = arr[a][b] + brr[a][b];
		}
	}
	printf("\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("[ %d,%d ] = %d",i,j,sum[a][b]);
		}
		printf("\n");
	}
	return 0;
}


