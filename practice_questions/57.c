//Write a program to display the calculator menu

#include<stdio.h>
#include<stdlib.h>

int add(int a,int b);
int sub(int a, int b);
int division(int a, int b);
int mod(int a,int b);
int multiply(int a,int b);

int main(){
	int n;
	printf("1:ADD\n2:SUBTRACT\n3:MULTIPLY\n4:DIVISION\n5:MODULUS\n");
	printf("Enter the choice : ");
	scanf("%d",&n);

	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);

	printf("Enter the second number : ");
	scanf("%d",&b);

	int result=0;
	switch(n){
		case 1:
			result = add(a,b);
			break;

		case 2:
			result = sub( a, b);
			break;

		case 3:
			result = multiply( a, b);
			break;

		case 4:
			result = division(a, b);
			break;

		case 5:
			result = mod( a, b);
			break;

		default:
			printf("Error..Try Again");
	}
	printf("%d",result);
return 0;
}


int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int multiply(int a,int b){
	return a*b;
}

int division(int a,int b){
	return a/b;
}

int mod(int a,int b){
	return a%b;
}
