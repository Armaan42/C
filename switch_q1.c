//check whether the entered alphabet is vowel or consonant 
#include<stdio.h>

int main() {
    char a_1;
    printf("Enter the alphabet : ");
    scanf("%c",&a_1);

    switch(a_1) {
        case 'a':
        printf("vowel");
        break;

        case 'e':
        printf("vowel");
        break;

        case 'i':
        printf("vowel");
        break;

        case 'o':
        printf("vowel");
        break;

        case 'u':
        printf("voewl");
        break;

        default:
            printf("consonant");
    }
    return 0;
}