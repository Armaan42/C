#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr;
    char name[40];
    int ph_no[10];
    printf("Enter the name : ");
    scanf("%s",name);

    printf("Enter the phone number : ");
    scanf("%d",&ph_no);

    fptr = fopen("abc.txt","w");
    if(fptr == NULL){
        printf("unable to create the file");
    }
    else{
        fprintf(fptr,"%s\t%d",name,ph_no);
        printf("file created successfully");
        fclose(fptr);
    }
    return 0;
}
    