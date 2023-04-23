// Write a program to find the even/odd number between 1 to N using the for loop

#include<stdio.h>

int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(i%2==1){
			printf("\n%d is odd",i);
		}
		else{
			printf("\n%d is even",i);
		}
	}
	return 0;
}