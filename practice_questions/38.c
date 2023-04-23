//Write a menu-driven program for +, –, and * without using any loop.

#include<stdio.h>
#include<stdlib.h>

void main(){
	auto int a,b;
	start:{
		printf("\n1:Additon\n2:Subtraction\n3:Division\n4:Multiplication\npress any number to exit\n\n");
	int choice;
	printf("Enter the choice : ");
	scanf("%d",&choice);

	if(choice == 1){
		goto add;
	}
	else if(choice == 2){
		goto sub;
	}
	else if(choice == 3){
		goto divide;
	}
	else if(choice == 4){
		goto multi;
	}
	else{
		exit(0);
	}

}


add:{
	printf("Enter the two number : ");
	scanf("%d%d",&a,&b);

	printf("sum is %d\n",a+b);
	goto start;
}

sub:{
	printf("Enter the two number : ");
	scanf("%d%d",&a,&b);

	printf("difference is %d\n",a-b);
	goto start;
}

multi:{
	printf("Enter the two number : ");
	scanf("%d%d",&a,&b);

	printf("product is %d\n",a*b);
	goto start;
}

divide:{
	printf("Enter the two number : ");
	scanf("%d%d",&a,&b);

	printf("divide is %d\n",a/b);
	goto start;
}
}