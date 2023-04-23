//Write a program to print the seriers 1,5,2,10,3,15. N using the for loop.

#include<stdio.h>

int main(){
	int n;
	printf("Ener the number : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		printf("%d %d ",i,i*5);
	}
	return 0;
}