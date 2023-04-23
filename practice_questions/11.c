//Write a program using the ternary operator to return greater number out of two numbers.

#include<stdio.h>

int main(){
	int a,b,x;
	printf("Enter the number : ");
	scanf("%d",&a);

	printf("Enter the number : ");
	scanf("%d",&b);

	x = (a>b)?printf("%d is greater",a):printf("%d is greater",b);
	return 0;
}