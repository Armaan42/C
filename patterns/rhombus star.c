#include<stdio.h>
void main(){
    int a;
    printf("enter the number of rows : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
    }
}