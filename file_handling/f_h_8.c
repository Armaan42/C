#include<stdio.h>

int main() {
    int status;
    status = remove("aaa.txt");
    if(status == 0 ){
        printf("file removed successfully");
    }
    else{
        printf("error while removing the file");
    }
    return 0;
}