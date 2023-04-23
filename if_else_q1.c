//maximum of three numbers
#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter the number : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    else if(b>a && b>c){
        printf("%d is greatest",b);
    }
    else if(c>a && c>b){
        printf("%d is greatest",c);
    }
    else{
        printf("error");
    }
    return 0;
}