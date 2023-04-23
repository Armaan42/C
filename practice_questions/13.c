//Write a program to find the greatest number out of three numbers, using the ternary operator.

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d%d%d",&a,&b,&c);

	(a>b && a>c)?printf("a is greatest"):(b>a && b>c)?printf("b is greatest"):printf("c is greatest");
	return 0;
}


