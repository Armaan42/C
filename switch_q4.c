#include<stdio.h>

int main() {
    int a;
    printf("Enter the first number (a): ");
    scanf("%d",&a);

    int b;
    printf("Enter the second number (b): ");
    scanf("%d",&b);

    switch( a > b ){
        case 1:
            printf("a is greater than b");
            break;

        default:
            printf("b is greater the a");
    }
    return 0;
}

