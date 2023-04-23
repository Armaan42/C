#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    char data[20];

    fptr = fopen("abc.txt","w");
    if(fptr == NULL){
        printf("unable to create the file");
    }else{
        printf("Enter the string : ");
        gets(data);
        fputs(data,fptr);
        printf("file created successfully");
        fclose(fptr);
    }
    return 0;
}