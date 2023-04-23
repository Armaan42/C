//Write a program to create all functions of an ATM.

#include<stdio.h>

int amount = 1000;
int withdrawal = 0;
int main(){
	int choice;
	printf("Enter the choice : ");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			printf("%d",amount);
			break;
		case 2:
			printf("Enter the withdrawal : ");
			scanf("%d",&withdrawal);

			printf("%d is withdrawal from your account\n",withdrawal);
			printf("Remaining amount in the account is %d",amount - withdrawal);
			break;

		default:
			printf("error");
	}
	return 0;
}