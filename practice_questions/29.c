//Write a program to print the seriers 1,3,5,7,9 N using the for loop.

#include<stdio.h>

int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i=i+2){
		printf("%d\n",i);
	}
	return 0;
}