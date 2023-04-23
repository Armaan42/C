//Write a program to implement Lift functions of an apartment. Ask the user where he wants to go and go on that floor. Press -1 if reached the destination

#include<stdio.h>
#include<Windows.h>
#include<conio.h>

void press_1();
int main(){
	int a;
	printf("Enter your floor (0-5) : ");
	scanf("%d",&a);

	switch(a){
		case 1:
			printf("Going to %dst floor...",a);
			Sleep(1000);
			printf("Reached your Destination.");
			printf("\n press 1 and enter to exit");
			press_1();
			break;

		case 2:
			printf("Going to %dnd floor...",a);
			Sleep(1000*2);
			printf("Reached your Destination.");
			printf("\n press 1 and enter to exit");
			press_1();
			break;

		case 3:
			printf("Going to %drd floor...",a);
			Sleep(1000*3);
			printf("Reached your Destination.");
			printf("\n press 1 and enter to exit");
			press_1();
			break;

		case 4:
			printf("Going to %dth floor...",a);
			Sleep(1000*4);
			printf("Reached your Destination.");
			printf("\n press 1 and enter to exit");
			press_1();
			break;

		case 5:
			printf("Going to %dth floor...",a);
			Sleep(1000*5);
			printf("Reached your Destination.");
			printf("\n press 1 and enter to exit");
			press_1();
			break;
	}
	return 0;
}

void press_1(){
	int n;
	label1:
	scanf("%d",&n);

	if(n==1){
		exit(0);
	}
	else{
		goto label1;
	}
}