//Write a program to count the vowels in a given name.

#include<stdio.h>
#include<string.h>

int main(){
	char name[20];
	printf("Enter the name : ");
	scanf("%s",&name);

	int count = 0;
	for(int i=0;i<=strlen(name);i++){
		if(name[i]=='a' || name[i]=='e' || name[i]=='o' || name[i]=='i' || name[i]=='u'){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}