//Write a program that converts a temperature from Centigrade into Fahrenheit

#include<stdio.h>

void c_to_f();
void f_to_c();

int main(){
	int choice;
	printf("Temperature Convertor\n1:centigrade to fahrenheit\n2:fahrenheit to centigrade\n");
	printf("Enter the choice : ");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			c_to_f();break;
		case 2:
			f_to_c();break;
		default:
			printf("Better luck next time");
	}
	return 0;
}

void c_to_f(){
	float c;
	printf("Enter the centigrade temperature : ");
	scanf("%f",&c);

	float f = ((9/5)*c )+ 32;
	printf("%.2f",f);
}

void f_to_c(){
	float f;
	printf("Enter the centigrade temperature : ");
	scanf("%f",&f);

	float c = ((9/5)*f )+ 32;
	printf("%.2f",c);
}