//Write a program to input a number and print its ASCII-equivlent value

#include<stdio.h>

int main(){
	char a;
	printf("Enter the number : ");
	scanf("%c",&a);

	printf("ASCII value for %c is %d",a,a);
	return 0;
}