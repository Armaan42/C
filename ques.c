//program to count the number of digits in a number
#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    do{
        count++;
        n = n/10;
    }while(n !=0);
    printf("%d",count);
    return 0;
}
