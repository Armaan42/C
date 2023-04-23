#include<stdio.h>

void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=5;k++){
            if(k==1 || k==5 || i==1 || i==5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}