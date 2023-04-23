#include<stdio.h>
void main(){
    int i,j;
        for(i=1;i<=10;i++){
            for(j=1;j<=9;j++){
                if( i==1||i==2||j==1||j==2||j==3||i==5||i==6||i==9||i==10){
                printf("*");
                }
                else{
                    printf(" ");
                }
            }  printf("\n");
        }
}