#include<stdio.h>
#include<math.h>


int add(int x,int y);
int sub(int x,int y);
int multiply(int x,int y);
int division(int x,int y);
int squareroot(int x);

int main(){
	int op;
	int sum,minus,multiplication,divide,sqroot;
    int x,y;
	printf("Enter the operator : ");
	scanf("%d",&op);

    printf("Enter the first number : ");
	scanf("%d",&x);
    printf("Enter the second number : ");
    scanf("%d",&y);

	switch(op){
		case 1:
			sum = add(x,y);
			printf("sum is %d",sum);
			break;

		case 2:
			minus = sub(x,y);
			printf("minus is %d",minus);
			break;

        case 3:
            multiplication = multiply(x,y);
            printf("multiplication is %d",multiplication);
            break;
        
        case 4:
            divide = division(x,y);
            printf("divison is %d",divide);
            break; 
        case 5:
            sqroot = squareroot(x);
            printf("%d",sqroot);
            break;
            
		default:
			printf("error...try again!!");
	}
	return 0;
}

int add(int x,int y){
	int z = x + y;
	return z;
}

int sub(int x,int y){
	int z = x - y;
	return z;
}

int multiply(int x,int y){
    int z = x *y;
    return z;
}

int division(int x,int y){
    int z = x/y;
    return z;
}

int squareroot(int x){
    int z = sqrt(x);
    return z;
}