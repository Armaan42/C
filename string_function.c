#include<stdio.h>
#include<string.h>

//TO FIND THE LENGTH OF THE STRING
void main(){
    char a[20];
    printf("enter the name : ");
    gets(a);
    printf("entered name : ");
    puts(a);
    printf("length of the name is %d",strlen(a));
}

//TO COPY THE STRING INTO ANOTHER STRING
void main() {
    char data[20] = "hello";
    char data_1[20];
    strcpy(data_1,data);
    printf("copied value is %s",data_1);
}

//TO CONCATENATE THE TWO STRINGS
void main() {
    char data_1[10] = "hell";
    char data_2[10] = "o";
    strcat(data_1,data_2);
    printf("%s",data_1);
}

//TO CHECK BOTH STRINGS ARE EQUAL OR NOT
void main() {
    char a[20];
    printf("Enter the first string : ");
    gets(a);

    char b[20];
    printf("Enter the second string : ");
    gets(b);

    if(strcmp(a,b)==0){
        printf("Both string are equal");
    }
    else{
        printf("Both string are unequal");
    }
}

//TO REVERSE THE STRING
void main() {
    char a[20];
    printf("Enter the string : ");
    gets(a);

    printf("reversed string %s",strrev(a));
}

//TO TURN THE UPPERCASE STRING INTO LOWERCASE 
void main() {
    char a[20];
    printf("Enter the uppercase string : ");
    gets(a);

    printf("lowercase string is %s",strlwr(a));
}

//TO TURN THE LOWERCASE STRING INTO UPPERCASE
void main() {
    char a[20];
    printf("Enter the lowercase string : ");
    gets(a);

    printf("uppercase string is %s",strupr(a));
}

//It is used to return substring from first match till the last character. 
void main() {
    char a[50] = "my name is shilla and shilla ki jawani";
    char *b;
    b = strstr(a,"nam");
    printf("substring %s",b);
}