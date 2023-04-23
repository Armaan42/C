//Write a program to input two numbers and interchange their values without using any third variable.

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("a = %d\nb = %d\n",a,b);

	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d",a,b);

	return 0;
}