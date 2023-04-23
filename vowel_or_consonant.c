#include<stdio.h>

int main(){
    char op;
    printf("Enter the character : ");
    scanf("%c",&op);

    switch(op){
        case 'a':
            printf("This is vowel%c\n");
            break;
        case 'e':
            printf("This is vowel%c\n");
            break;
        case 'i':
            printf("This is vowel%c\n");
            break;
        case 'o':
            printf("This is vowel%c\n");
            break;        
        case 'u':
            printf("This is vowel%c\n");
            break;
        default:
            printf("constant");
    }
    return 0;
}