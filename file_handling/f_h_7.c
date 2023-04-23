#include<stdio.h>

int main() {
    if(rename("abc.txt","aaa.txt")==0){
        printf("file renamed successfully");
    }
    else{
        printf("error while renameing the file");
    }
    return 0;
}