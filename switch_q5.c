// C program to print number of days in any month
#include<stdio.h>

int main() {
    int a;
    printf("\n1_january\n2_february\n3_march\n4_april\n5_may\n6_june\n7_july\n8_august\n9_september\n10_october\n11_november\n12_december\n");
    printf("\nEnter to find the number of days : ");
    scanf("%d",&a);

    switch(a) {
        case 1:
            printf("January - 31");
            break;
        case 2:
            printf("February - 28");
            break;
        case 3:
            printf("March - 31");
            break;
        case 4:
            printf("April - 30");
            break;
        case 5:
            printf("May - 31");
            break;
        case 6:
            printf("June - 30");
            break;
        case 7:
            printf("July - 31");
            break;
        case 8:
            printf("August - 31");
            break;
        case 9:
            printf("September - 30");
            break;
        case 10:
            printf("october - 31");
            break;
        case 11:
            printf("November - 30");
            break;
        case 12:
            printf("December - 31");
            break;
        default: {
            printf("error");
        }

    }
    return 0;
}