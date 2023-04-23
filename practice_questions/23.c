//Write a program to calculate the amount payable after deducting the discount on the purchase amount.

#include<stdio.h>

int main(){
	float cost_price,discount;
	printf("Enter the cost price : ");
	scanf("%f",&cost_price);

	if(cost_price >= 8000){
		discount = cost_price * .10;
	}
	else if(cost_price >= 5000){
		discount = cost_price * .08;
	}
	else if(cost_price >= 1000){
		discount = cost_price * .04;
	}
	else{
		discount = 100;
	}

	float amount = cost_price - discount;
	printf("Amount to be paid after %f discount deducted is %f",discount,amount);
	return 0;
}