//Write a program to read 10 numbers from keyboard and find their sum and average.

#include<stdio.h>

int main(){
	int sum = 0,n;
	for(int i=1;i<=10;i++){
		printf("Enter the %d number : ",i);
		scanf("%d",&n);

		sum  = sum + n;

	}
	printf("sum is %d\n",sum);
	float average = sum / 10;
	printf("Average is %.2f",average);
	return 0;
}