//. Write a program to convert a capital letter into small and vice-versa in a given string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[20];
	printf("Enter the name : ");
	scanf("%s",a);

	for(int i=0;i<strlen(a);i++){
		if(isupper(a[i])){
			a[i] = tolower(a[i]);
		}
		else if(islower(a[i])){
			a[i] = toupper(a[i]);
		}
	}
	printf("%s",a);
	return 0;
}

