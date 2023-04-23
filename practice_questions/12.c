//Write a program using the ternary operator to check whether the gender is male or female.

#include<stdio.h>

void main(){
	char a;
	printf("M : penis\nF : vagina\n");
	printf("Enter the choice : ");
	scanf("%c",&a);

	(a == 'M')?printf("male"):printf("female");
}