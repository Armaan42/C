//Write a program to read any month number in integer and display the number of days for this month.

#include<stdio.h>

int main(){
	printf("1:january\n2:february\n3:march\n4:april\n5:may\n6:june\n7:july\n8:august\n9:september\n10:october\n11:november\n12:december\n\n");
	int choice;
	printf("Enter the month number : ");
	scanf("%d",&choice);

	switch(choice){
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days");break;
		case 2:
			printf("28 or 29 (leap)");break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days");break;
		default:
			printf("Better luck next time");
	}
	return 0;
}