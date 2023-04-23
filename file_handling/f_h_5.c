#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr;
    char data[40];
    char name[20];

    fptr = fopen("abc.txt","r");
    if(fptr == NULL) {
        printf("unable to create the file");
    }
    else{
        fscanf(fptr,"%s %s",data,name);
        printf("%s %s",data,name);
        fclose(fptr);
    }
    return 0;
}