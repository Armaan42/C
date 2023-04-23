//Write a program to find the factorial of a given number using the while loop.

#include<stdio.h>

void main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	int fact = 1,i=1;
	while(i<=n){
		fact = fact * i;
		i++;
	}
	printf("%d",fact);
}