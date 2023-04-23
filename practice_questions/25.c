//Write a program to print the seriers 1 to N using the for loop.

#include<stdio.h>

int main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);

	for(int i=1;i<=a;i++){
		printf("%d\n",i);
	}
	return 0;
}