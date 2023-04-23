#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    char data;

    fptr = fopen("abc.txt","r");
    if(fptr == NULL){
        printf("unable to create the file");
    }
    else{
        while(!feof(fptr)){
            data = fgetc(fptr);
            printf("%c",data);
        }
        fclose(fptr);
    }
    return 0;
}
