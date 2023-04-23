#include<stdio.h>

void ar_circle();
void ar_rectangle();
void ar_square();

int main() {
    ar_circle();
    return 0;
}

void ar_circle() {
    int a;
    printf("AREA OF CIRCLE\n");
    printf("Enter the radius : ");
    scanf("%d",&a);

    float ar = 3.14 * a * a;
    printf("The area of circle is %.2f",ar);
    ar_rectangle();
}

void ar_rectangle() {
    int l;
    printf("\n");
    printf("AREA OF RECTANGLE\n");
    printf("Enter the length : ");
    scanf("%d",&l);

    int b;
    printf("Enter the breadth : ");
    scanf("%d",&b);

    float ar = l * b;
    printf("The area of rectangle is %.2f",ar);
    ar_square();
}

void ar_square() {
    int a;
    printf("\n");
    printf("AREA OF SQUARE");
    printf("Enter the side : ");
    scanf("%d",&a);

    float ar = a * a;
    printf("The area of square is %.2f",ar);
}

// #include<stdio.h>

// int main() {
//     char ch;
//     printf("Enter c - circle : ");
//     printf("Enter r - rectangle : ");
//     printf("Enter s - square : ");
//     scanf("%c",&ch);

//     if (ch = 'c') {
//         int a;
//         printf("Enter the radius of circle : ");
//         scanf("%d",&a);

//         int area = 3.14* a * a;
//         printf("The area of circle is %d",area);
//     }
//     else if(ch = 'r') {
//         int l;
//         printf("Enter the length : ");
//         scanf("%d",&l);

//         int b;
//         printf("Enter the breadth : ");
//         scanf("%d",&b);

//         int area = l * b;
//         printf("The area of rectangle is %d",area);
        
//     }
//     else if(ch = 's') {
//         int a;
//         printf("Enter the side of square : ");
//         scanf("%d",&a);

//         int area = a * a;
//         printf("Enter the side of square : %d",area);
       
//     }
//     return 0;
// }