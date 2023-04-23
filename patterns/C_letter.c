#include<stdio.h>
void main(){
    int i,j;
        for(i=1;i<=9;i++){
            for(j=1;j<=9;j++){
                if( i==1|| i==2 || j==1||j==2||j==3||i==8||i==9){
                printf("*");
                }
                else{
                    printf(" ");
                }
            }  printf("\n");
        }
}
