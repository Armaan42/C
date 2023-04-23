//Write a function to calculate the factorial of given number.

#include<stdio.h>

int facto(int a);
int fact = 1;
int main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);

	int factorial = facto(a);
	printf("%d",factorial);
	return 0;
}

int facto(int a){
	for(int i=1;i<=a;i++){
		fact = fact * i;
	}
	return fact;
}