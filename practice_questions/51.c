//Write a program to print a name in the reverse order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Original string: %s\n", str);
    strrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
