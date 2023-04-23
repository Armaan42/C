//Write a program to calculate simple interest when P, R, and T are given by the user.


#include<stdio.h>

int main(){
	int p,r,t;
	printf("Enter the principle : ");
	scanf("%d",&p);

	printf("Enter the rate : ");
	scanf("%d",&r);

	printf("Enter the time : ");
	scanf("%d",&t);

	float simple_interest = (p*r*t)/100;
	printf("%f",simple_interest);
	return 0;
}