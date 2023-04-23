//. Write a program to find whether a given year is a leap year or not.

#include<stdio.h>

int main(){
	int a;
	printf("Enter the year : ");
	scanf("%d",&a);

	if((a%400 && a%100 && a%4)==0){
		printf("Its is leap year");
	}
	else{
		printf("Not a leap year");
	}
	return 0;
}