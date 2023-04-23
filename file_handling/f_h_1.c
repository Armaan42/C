//TO write into a file using file_handling
#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr;

    char data[20] = "hello\n";
    int length = strlen(data);

    fptr = fopen("abc.txt","a");
    if(fptr == NULL){
        printf("unable to create a file");
    }
    else{
        for(int i=0;i<length;i++){
            fputc(data[i],fptr);
        }
        printf("created file successfully");
        fclose(fptr);
    }

    return 0;
}