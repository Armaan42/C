// Write a program using the ternary operator to check whether a given number is positive or negative

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a == 0){
        printf("zero");
        exit(0);
    }
    (a>0)?printf("positive number"):printf("negative number");
    return 0;
}