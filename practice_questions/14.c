//Write a program to check whether a person is eligible to vote or not, using the ternary operator (eligibility criterion: age should be more than 18 years).

#include<stdio.h>

int main(){
	int a;
	printf("Enter the age : ");
	scanf("%d",&a);

	(a>18)?printf("eligible to vote"):printf("not eligible to vote,BETTER LUCK NEXT TIME");
	return 0;
}