//Write a program to find the factorial of given number using recursion.

#include<stdio.h>
int fact(int n);

int main(){
	int n;
	printf("Enter the number to find its factorial : ");
	scanf("%d",&n);

	printf("factorial : %d",fact(n));
	return 0;
}

int fact(int n){
	if(n>=1){
		return n*fact(n-1);
	}
	else{
		return 1;
	}
}