#include<stdio.h>

int main() {
    char ch;
    printf("Enter c - circle : ");
    printf("Enter r - rectangle : ");
    printf("Enter s - square : ");
    scanf("%c",&ch);

    if (ch = 'c') {
        int a;
        printf("Enter the radius of circle : ");
        scanf("%d",&a);

        int area = 3.14* a * a;
        printf("The area of circle is %d",area);
    }
    else if(ch = 'r') {
        int l;
        printf("Enter the length : ");
        scanf("%d",&l);

        int b;
        printf("Enter the breadth : ");
        scanf("%d",&b);

        int area = l * b;
        printf("The area of rectangle is %d",area);
        
    }
    else if(ch = 's') {
        int a;
        printf("Enter the side of square : ");
        scanf("%d",&a);

        int area = a * a;
        printf("Enter the side of square : %d",area);
       
    }
    return 0;
}