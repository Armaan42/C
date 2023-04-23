//Write a program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 ... !n/n using the user defined functio

#include<stdio.h>

int facto(int a);
int fact = 1,sum = 0;
int main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	int pattern;
	for(int i=1;i<=a;i++){
		pattern = facto(i)/i; 
		sum = sum + pattern;
	}
	printf("%d",sum);
	return 0;
}

int facto(int a){
	for(int i=1;i<=a;i++){
		fact = fact * i;
	}
	return fact;
}
