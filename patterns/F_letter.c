#include<stdio.h>
void main(){
    int i,j;
        for(i=1;i<=8;i++){
            for(j=1;j<=8;j++){
                if(j==1 || j==3 || j==2 || i==4|| i==5 || i==1 || i==2 ){
                printf("*");
                }
                else{
                    printf(" ");
                }
            }  printf("\n");
        }
}
