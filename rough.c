#include<stdio.h>

int main(){
	FILE *fptr;
	char name[30];
	int id;
	int marks;
	fptr = fopen("student.txt","r");

	if(fptr == NULL){
		printf("unable to opne the file");
	}
	else{
		printf("Enter the id : ");
		scanf("%d",&id);
		fprintf(fptr,"ID = %d\n",id);

		printf("Enter the name : ");
		scanf("%s",&name);
		fprintf(fptr,"Name = %s\n",name);

		printf("Enter the marks : ");
		scanf("%d",&marks);
		fprintf(fptr,"MARKS = %d\n\n",marks);

		printf("file created successfully");
	}
	fclose(fptr);
	return 0;
}