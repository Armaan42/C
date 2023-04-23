#include<stdio.h>

int main() {
    int a,num,mult;
    printf("Enter the number : ");
    scanf("%d",&a);

    for(a,num=1;num<=10;num++) {
        mult = a*num;
        printf("%d x %d = %d \n" ,a,num,mult);
    }
    return 0;
}