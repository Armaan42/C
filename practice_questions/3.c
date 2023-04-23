//Write a program to input marks of three subjects and calculate the total and percentage.
#include<stdio.h>

void main(){
	float first,second,third;
	printf("Enter the marks of maths : ");
	scanf("%f",&first);

	printf("Enter the marks of english : ");
	scanf("%f",&second);

	printf("Enter the marks of science : ");
	scanf("%f",&third);

	float total =  first + second + third; 
	printf("Total marks obatined : %f\n",total); 

	float percentage = ( total / 300 ) * 100;
	printf("Percentage achieved is %f",percentage);
}
