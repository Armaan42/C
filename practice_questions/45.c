//Write a program to find the maximum, sum of even, and sum of odd elements of an array.

#include<stdio.h>

int main(){
	int a[5];
	int max=0,se=0,so=0;
	for(int i=0;i<5;i++){
		printf("enter the %d element of array : ",i);
		scanf("%d",&a[i]);
	}

	for(int i=0;i<5;i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]%2==0){
			se = se + a[i];
		}
		if(a[i]%2==1){
			so = so + a[i];
		}
	}
	printf("max : %d\n",max);
	printf("even : %d\n",se);
	printf("odd : %d\n",so);
	return 0;
}
