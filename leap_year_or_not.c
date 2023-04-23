#include<stdio.h>
int main(){
    int a;
    printf("Enter the year to check whether it is leap year or not : ");
    scanf("%d",&a);

    if(a%4==0){
        printf("yes, it's a leap year");
    }else if(a%100==0){
        printf("yes, it's a leap year");
    }else if(a%400==0){
        printf("yes, it's a leap year");
    }else{
        printf("no, it's not a leap year");
    }
    return 0;
}