//Write a program to enter a one-digit number and display it in words.

#include<stdio.h>

int main(){
	char a[][10] = {{"Zero"},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"}};
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	printf("%s",n[a]);
	return 0;
}

