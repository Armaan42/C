//Write a program to swap two numbers.

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter the first number : ");
	scanf("%d",&a);

	printf("Enter the second number : ");
	scanf("%d",&b);

	printf("Before swapping a = %d and b = %d\n",a,b);

	c = b;
	b = a;
	a = c;

	printf("After swapping a = %d and b = %d",a,b);
	return 0;
}