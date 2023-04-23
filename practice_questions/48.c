//Write a program to enter a string and replace a with e.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a') {
            str[i] = 'e';
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}
