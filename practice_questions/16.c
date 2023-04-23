//Write a program to accept two integers and check whether they are equal or not

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);

	printf("Enter the second number : ");
	scanf("%d",&b);

	if(a == b){
		printf("Both are equal");
	}
	else{
		printf("Both are unequal");
	}
	return 0;
}