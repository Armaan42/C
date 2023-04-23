//Write a program to print the Fibonacci series 0,1,1,2,3,5,8...N

#include<stdio.h>

void main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int a = 0, b = 1;
	for(int i=1;i<=n;i++){
		printf("%d ",a);
		int c = a+b;
		a = b;
		b = c;
	}
}