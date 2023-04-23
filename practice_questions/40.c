//Write a program to print a number in the reverse order.

#include<stdio.h>

void main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int rem,reverse=0;
	while(n!=0){
		rem = n % 10;
		reverse = rem + n/10;
		n = n/10;
	}
	printf("%d",reverse);
}