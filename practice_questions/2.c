//simple calcualator
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divide(int a, int b);
int rem(int a, int b);
void squareroot();
void power();

void main(){
	printf("\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Remainder\n6:Squareroot\n7:power\n\n");
	int choice,result=0;
	printf("Enter the choice : ");
	scanf("%d",&choice);

	if(choice == 6){
		squareroot();
		exit(0);
	}
	else if(choice == 7){
		power();
		exit(0);
	}

	int a,b;	
	printf("Enter the first number : ");
	scanf("%d",&a);

	printf("Enter the second number : ");
	scanf("%d",&b);

	switch(choice){
		case 1:
			result = add(a,b);
			break;
		case 2:
			result = sub(a,b);
			break;
		case 3:
			result = multi(a,b);
			break;
		case 4:
			result = divide(a,b);
			break;
		case 5:
			result = rem(a,b);
			break;
		default:
			printf("Better luck next time");
	}
	printf("%d",result);
}

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int multi(int a, int b){
	return a*b;
}

int divide(int a, int b){
	return a/b;
}

int rem(int a, int b){
	return a%b;
}

void squareroot(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);

	int sq = sqrt(a);
	printf("%d",sq);
}

void power(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);

	int _pow = pow(a,2);
	printf("%d",_pow);
}
