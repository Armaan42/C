// Write a program to compute the area and circumference of a circle with a radius 4 inch.
#include<stdio.h>
#include<math.h>
#define pi 3.14
void main(){
	int radius;
	printf("Enter the number : ");
	scanf("%d",&radius);

	float area,circumference;
	printf("Area = %.4f\n",pi* pow(radius,2));
	printf("circumference = %.4f",2 * pi * radius);
}