//Write a program to input numbers until the user enters 99.

#include<stdio.h>

int main(){
	int n;
	label:
	printf("Enter the number : ");
	scanf("%d",&n);

	while(n!=99){
		goto label;
	}
	printf("Byee");
	return 0;
}