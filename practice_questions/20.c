// Write a program to calculate the profit and loss in a transaction

#include<stdio.h>

int main(){
    float cost_price,selling_price;
    printf("Enter the cost price : ");
    scanf("%f",&cost_price);

    printf("Enter the selling price : ");
    scanf("%f",&selling_price);

    if(cost_price>selling_price){
        printf("loss");
    }
    else if(cost_price<selling_price){
        printf("profit");
    }
    return 0;
}