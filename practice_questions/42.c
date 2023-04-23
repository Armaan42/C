// Write a program to check whether a given number is perfect square or not?

#include<stdio.h>

int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	for(int i=0;i<=n;i++){
		if(n == i*i){
			printf("Perfect square");
			return 0;
		}
	}
	printf("not a prefect square");
	return 0;
}