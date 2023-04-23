// C program to check whether a number is odd or even using switch statement
#include<stdio.h>

// int main() {
//     int a;
//     printf("Enter the number : ");
//     scanf("%d",&a);
//     if (a%2==0) {
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }

//     return 0;
// }

int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    
    switch(a%2==0) {
        case 1 :
            printf("even");
            break;

        default: 
            printf("odd");
    }
    return 0;
}