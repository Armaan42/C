//Write a program to create a structure “student,”access its members and display the details.

#include<stdio.h>

struct students{
	char name[10];
	int marks;
	int age;
};
int main(){
	struct students s1;

	printf("Enter the student name : ");
	scanf("%s",s1.name);

	printf("Enter the marks : ");
	scanf("%d",&s1.marks);

	printf("Enter the age : ");
	scanf("%d",&s1.age);

	printf("\nInformation of student listed below:-\n");
	printf("Name : %s\nAge : %d\nMarks : %d",s1.name,s1.marks,s1.age);
	return 0;
}