//. Write a program to read any day in integer and display the day name in words.

#include<stdio.h>

int main(){
	printf("1:Monday\n2:Tuesday\n3:Wednesday\n4:Thrusday\n5:Friday\n6:Saturday\n7:Sunday\n");
	int choice;
	printf("Enter the choice : ");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			printf("Monday");break;
		case 2:
			printf("Tuesday");break;
		case 3:
			printf("Wednesday");break;
		case 4:
			printf("Thrusday");break;
		case 5:
			printf("Friday");break;
		case 6:
			printf("Saturday");break;
		case 7:
			printf("Sunday");break;
		default:
			printf("Error...Try again");
	}
	return 0;
}