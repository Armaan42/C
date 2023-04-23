// Write a program to display current Date and time?

#include<stdio.h>
#include<time.h>

int main(){
	time_t t;
	time(&t);
	printf("current date and time = %s",ctime(&t));
	return 0;
}