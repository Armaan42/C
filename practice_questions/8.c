//Write a program to input the quantity of pens and price of each pen purchased, and calculate the total amount payable.

#include<stdio.h>

void main(){
	int n;
	printf("enter the number of pens : ");
	scanf("%d",&n);

	int e = 10;
	int total = n*e;
	printf("Total amount to be paid is %d",total);
}