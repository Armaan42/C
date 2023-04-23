#include<stdio.h>

int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int n = 1;
    for(int i=1;i<=10;i++) {
        n = a * i;
        printf("%d\n",n);
    }
    return 0;
}