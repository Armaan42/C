//Write a program to calculate the space and print the length of a name, excluding spaces.

#include<stdio.h>
#include<string.h> 

int main(){
	char a[50];
	printf("Enter the name : ");
	scanf("%s",&a);

	int count=0;
	for(int i=0;i<=strlen(a);i++){
		if(a[i] == ' '){
			count++;
		}
	}
	int length = strlen(a) - count ;
	printf("%d",length);
	return 0;
}

