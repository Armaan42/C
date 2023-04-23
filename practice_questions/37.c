// Write a program to input the four-digit ATM pin. (pin should not be visible).

#include<stdio.h>
#include<conio.h>

int main(){
	char pin;
	printf("Enter the pin : ");
	for(int i=1;i<=4;i++){
		pin = getch();
		printf("*");
	}
	return 0;
}

