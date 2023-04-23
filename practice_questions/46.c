//Write a program to enter your name and display a pattern.
//Hint: Hello H He Hel Hell Hello

#include<stdio.h>
#include<string.h>

int main(){
	char a[20];
	printf("Enter the name : ");
	scanf("%s",&a);

	for(int i=0;i<=strlen(a);i++){
		for(int j=0;j<i;j++){
			printf("%c ",a[j]);
		}
	}
	return 0;
}
