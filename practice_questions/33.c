// Write a program to print the seriers 1,–1,1,–1,1,–1,. N using the for loop.

#include<stdio.h>

int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(i%2==1){
			printf("1 ");
		}
		else{
			printf("-1 ");
		}
	}
	return 0;
}