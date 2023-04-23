//Write a program to create a structure and read data of 10 students.

#include<stdio.h>

struct students{
	char name[10];
	int age;
};

int main(){
	struct students s[10];

	for(int i=1;i<=10;i++){
		printf("Enter the name of the students : ");
		scanf("%s",s[i].name);

		printf("Enter the age of the students : ");
		scanf("%d",&s[i].age);
	}
	printf("\nStudents Details :-\n");
	for(int i=1;i<=10;i++){
		printf("Name : %s\nAge : %d\n",s[i].name,s[i].age);
	}
	return 0;
}

