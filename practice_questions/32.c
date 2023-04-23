//Write a program to print the seriers 1,0,1,0,1,0,1,. N using the for loop.

#include<stdio.h>

int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	for(int i=0;i<=n;i++){
		if(i%2 == 0){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
	}
	return 0;
}