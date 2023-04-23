#include<stdio.h>

int main() {
    int a,sum=0;
    printf("how many number you wants to add : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++) {
        sum = sum + a;
    }
    printf("%d",sum);
    return 0;
}

//adding the number by number of times we have a constant
/* e.g:1
        input = 2
        output = 4
   e.g:2
        input = 3
        output = 9
*/