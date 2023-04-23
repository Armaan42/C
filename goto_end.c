#include<stdio.h>

int main() {
    label:
        printf("hello_world");
        printf("\nmy name is shilla and shilla ki jawani");
        goto end;
        goto label;
        end:
            printf("\nthis is end");
    return 0;
}