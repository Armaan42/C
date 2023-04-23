//Write a program to check whether a character is a vowel or consonant.

#include<stdio.h>

int main(){
	char choice;
	printf("Enter the alphabet : ");
	scanf("%c",&choice);

	if(choice == 'a' || choice == 'e' || choice == 'i' || choice == 'o' || choice == 'u'){
		printf("vowel");
	}
	else{
		printf("consonant");
	}
	return 0;
}