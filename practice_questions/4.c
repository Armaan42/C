//Write a program to calculate the speed of bike, when the distance and time are given by the user.

#include<stdio.h>

void main(){
	int speed,time,distance;
	printf("Enter the distance (in KM) : ");
	scanf("%d",&distance);

	printf("Enter the time (in HOURS): ");
	scanf("%d",&time);

	speed = distance / time;
	printf("The speed you required is %d km/h",speed);
}