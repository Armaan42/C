#include<stdio.h>

int main() {
    FILE *fptr;
    char data[15];

    fptr = fopen("abc.txt","r");
    if(fptr == NULL){
        printf("unable to create file");
    }
    else{
        while(!feof(fptr)){
            fgets(data,15,fptr);
            printf("%s",data);
        }
        fclose(fptr);
    }
    return 0;
}