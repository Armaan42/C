// C program to print name of days in week using switch statement
#include<stdio.h>

int main() {
    int day;
    printf(" Enter \n 1 _ monday\n 2 _ Tuesday\n 3 _ Wednesday\n 4 _ Thrusday\n 5 _ Friday\n 6 _ saturday\n 7 _ Sunday\n");
    scanf("%d",&day);

    switch(day) {
        case 1:
            printf("Monday");
            break;
        
        case 2:
            printf("Tuesday");
            break;
        
        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thrusday");
            break;

        case 5:
            printf("Friday");
            break;
        
        case 6:
            printf("Saturday");
            break;
        
        case 7:
            printf("Sunday");
            break;

        default:
            printf("try again...");

    }
    return 0;
}