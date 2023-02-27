#include<stdio.h>

void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void i();
void j();
void k();
void l();
void m();
void n();
void o();
void p();
void q();
void r();
void s();
void t();
void u();
void v();
void w();
void x();
void y();
void z();
void zero();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
void ten();

int main(){
    int choice;
    printf("\n1:Number\n2:Alphabet\n");
    printf("\n\tEnter the choice :");
    scanf("%d",&choice);

    int aa;
    char bb;
    switch(choice){
        case 1:
            //int a;
            printf("\n\tEnter the number to print its design : ");
            scanf("%d",&aa);
            switch(aa){
                case 0:
                    zero();
                    break;
                case 1:
                    one();
                    break;
                case 2:
                    two();
                    break;
                case 3:
                    three();
                    break;
                case 4:
                    four();
                    break;
                case 5:
                    five();
                    break;
                case 6:
                    six();
                    break;
                case 7:
                    seven();
                    break;
                case 8:
                    eight();
                    break;
                case 9:
                    nine();
                    break;
                default:
                    printf("error");
            }
            break;
        case 2:
            //int b;
            printf("\n\tEnter the alphabet to print its design : ");
            scanf("%s",&bb);

            switch(bb){
                case 'a':
                case 'A':
                    a();
                    break;
                case 'b':
                case 'B':
                    b();
                    break;
                case 'c':
                case 'C':
                    c();
                    break;
                case 'd':
                case 'D':
                    d();
                case 'e':
                case 'E':
                    e();
                    break;
                case 'f':
                case 'F':
                    f();
                    break;
                case 'g':
                case 'G':
                    g();
                    break;
                case 'h':
                case 'H':
                    h();
                    break;
                case 'i':
                case 'I':
                    i();
                    break;
                case 'j':
                case 'J':
                    j();
                    break;
                case 'k':
                case 'K':
                    k();
                    break;
                case 'l':
                case 'L':
                    l();
                    break;
                case 'm':
                case 'M':
                    m();
                    break;
                case 'n':
                case 'N':
                    n();
                    break;
                case 'o':
                case 'O':
                    o();
                    break;
                case 'p':
                case 'P':
                    p();
                    break;
                case 'q':
                case 'Q':
                    q();
                    break;
                case 'r':
                case 'R':
                    r();
                    break;
                case 's':
                case 'S':
                    s();
                    break;
                case 't':
                case 'T':
                    t();
                    break;
                case 'u':
                case 'U':
                    u();
                    break;
                case 'v':
                case 'V':
                    v();
                    break;
                case 'w':
                case 'W':
                    w();
                    break;
                case 'x':
                case 'X':
                    x();
                    break;
                case 'y':
                case 'Y':
                    y();
                    break;
                case 'z':
                case 'Z':
                    z();
                    break;
                default:
                    printf("error");
            }
            break;
            default:
                printf("main error");
    }
    return 0;
}
//FOR A - ALPHABET
void a(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2 || i==5 || i==6 || j==1 || j==2 || j==3 || j==8 || j==9 || j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR B - ALPHABET
void b(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if((i==1 && j>8)){
                printf(" ");
            }
            else if(i==1){
                printf("*");
            }
            else if((i==5 && j>8)){
                printf(" ");
            }
            else if(i==5){
                printf("*");
            }
            else if((i==10 && j>8)){
                printf(" ");
            }
            else if(i==10){
                printf("*");
            }
            else if(j==1){
                printf("*");
            }
            else if((i==2 && j==10)){
                printf("*");
            }
            else if((i==3 && j==10)){
                printf("*");
            }
            else if((i==4 && j==10)){
                printf("*");
            }
            else if((i==6 && j==10)){
                printf("*");
            }
            else if((i==7 && j==10)){
                printf("*");
            }
            else if((i==8 && j==10)){
                printf("*");
            }
            else if((i==9 && j==10)){
                printf("*");
            }
            else if((i>=2 && j==9)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR C - ALPHABET
void c(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2 || i==3 || i==8 || i==9 || i==10 || j==1 || j==2 || j==3 || j==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR D - ALPHABET
void d(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1){
                printf("*");
            }
            else if(i==1 && j==8){
                printf(" ");
            }
            else if(i==1 && j==9){
                printf(" ");
            }
            else if(i==1 && j==10){
                printf(" ");
            }
            else if(i==10 && j==8){
                printf(" ");
            }
            else if(i==10 && j==9){
                printf(" ");
            }
            else if(i==10 && j==10){
                printf(" ");
            }
            else if(i==1 || i==10){
                printf("*");
            }
            else if(i==2 && j==8){
                printf("*");
            }
            else if(i==3 && j==9){
                printf("*");
            }
            else if(i==4 && j==10){
                printf("*");
            }
            else if(i==5 && j==10){
                printf("*");
            }
            else if(i==6 && j==10){
                printf("*");
            }
            else if(i==7 && j==10){
                printf("*");
            }
            else if(i==8 && j==9){
                printf("*");
            }
            else if(i==9 && j==8){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR E - ALPHABET

void e(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2 || i==5 || i==6 || i==9 || i==10 || j==1 || j==2 || j==3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR F - ALPHABET

void f(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2 || i==5 || i==6 || j==1 || j==2 ||j==3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR G - ALPHABET
void g(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || j==1){
                printf("*");
            }
            else if(j==10 && i>10/2){
                printf("*");
            }
            else if(j==6 && i>10/2){
                printf("*");
            }
            else if(i==6 && i<10/2){
                printf("*");
            }
            else if((i==6 && j>=7)){
                printf("*");
            }
            else if((i==10 && j<7)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR H - ALPHABET
void h(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==5 || i==6 || j==1 || j==2 || j==3 || j==8 || j==9 || j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR I - ALPHABET  
void i(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2 || i==9 || i==10 || j==4 || j==5 || j==6 || j==7){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR J - ALPHABET
void j(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || j==6){
                printf("*");
            }
            else if(j==1 && i>10/2){
                printf("*");
            }
            else if((i==10 && j<6)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR K - ALPHABET
void k(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1 || j==2){
                printf("*");
            }
            else if((j==2 && i==5)){
                printf("*");
            }
            else if((j==2 && i==6)){
                printf("*");
            }
            else if((j==3 && i==4)){
                printf("*");
            }
            else if((j==3 && i==7)){
                printf("*");
            }
            else if((j==4 && i==3)){
                printf("*");
            }
            else if((j==4 && i==8)){
                printf("*");
            }
            else if((j==5 && i==3)){
                printf("*");
            }
            else if((j==5 && i==8)){
                printf("*");
            }
            else if((j==6 && i==2)){
                printf("*");
            }
            else if((j==7 && i==2)){
                printf("*");
            }
            else if((j==8 && i==1)){
                printf("*");
            }
            else if((j==9 && i==1)){
                printf("*");
            }
            else if((j==6 && i==9)){
                printf("*");
            }
            else if((j==7 && i==9)){
                printf("*");
            }
            else if((j==8 && i==10)){
                printf("*");
            }
            else if((j==9 && i==10)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR L - ALPHABET  
void l(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==9 || i==10 || j==1 || j==2 || j==3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR M - ALPHABET
void m(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1 || j==10){
                printf("*");
            }
            else if((i==2 && j==2)){
                printf("*");
            }
            else if((i==3 && j==3)){
                printf("*");
            }
            else if((i==4 && j==4)){
                printf("*");
            }
            else if((i==5 && j==5)){
                printf("*");
            }
            else if((i==4 && j==6)){
                printf("*");
            }
            else if((i==3 && j==7)){
                printf("*");
            }
            else if((i==2 && j==8)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR N - ALPHABET
void n(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1 || j==10){
                printf("*");
            }
            else if(i==2 && j==2){
                printf("*");
            }
            else if(i==3 && j==3){
                printf("*");
            }
            else if(i==4 && j==4){
                printf("*");
            }
            else if(i==5 && j==5){
                printf("*");
            }
            else if(i==6 && j==6){
                printf("*");
            }
            else if(i==7 && j==7){
                printf("*");
            }
            else if(i==8 && j==8){
                printf("*");
            }
            else if(i==9 && j==9){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR O - ALPHABET
void o(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2 || i==9 || i==10 || j==1 || j==2 || j==3 || j==8 || j==9 || j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR P -ALPHABET
void p(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1 || i==1 || i==5){
                printf("*");
            }
            else if((j==10 && i<10/2)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR Q - ALPHABET
void q(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==7){
                printf("*");
            }
            else if(j==1 && i<=7){
                printf("*");
            }
            else if(j==10 && i<=7){
                printf("*");
            }
            else if((i==6 && j==6)){
                printf("*");
            }
            else if((i==8 && j==8)){
                printf("*");
            }
            else if((i==9 && j==9)){
                printf("*");
            }
            else if((i==10 && j==10)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR R - ALPHABET
void r(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || j==1 || i==5){
                printf("*");
            }
            else if((j==10 && i<10/2)){
                printf("*");
            }
            else if((i==6 && j==2)){
                printf("*");
            }
            else if(i==7 && j==3){
                printf("*");
            }
            else if(i==8 && j==5){
                printf("*");
            }
            else if(i==9 && j==7){
                printf("*");
            }
            else if(i==10 && j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR S - ALPHABET  
void s(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==5 || i==10){
                printf("*");
            }
            else if(j==1 && i<10/2){
                printf("*");
            }
            else if(j==10 && i>10/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


//FOR T - ALPHABET
void t(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==2  || j==5 || j==7){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR U - ALPHABET
void u(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==9 || i==10 || j==1 || j==2 || j==3 || j==8 || j==9 || j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR V - ALPHABET
void v(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if((i==10 && j>5)){
                printf(" ");
            }
            else if((i==10 && j<5)){
                printf(" ");
            }
            else if(i==10){
                printf("*");
            }
            else if((j==1 && i>3)){
                printf(" ");
            }
            else if(j==1){
                printf("*");
            }
            else if((j==10 && i>3)){
                printf(" ");
            }
            else if(j==10){
                printf("*");
            }
            else if((i==4 && j==2)){
                printf("*");
            }
            else if((i==5 && j==2)){
                printf("*");
            }
            else if((i==6 && j==2)){
                printf("*");
            }
            else if((i==7 && j==2)){
                printf("*");
            }
            else if((i==8 && j==3)){
                printf("*");
            }
            else if((i==9 && j==4)){
                printf("*");
            }
            else if((i==9 && j==6)){
                printf("*");
            }
            else if((i==8 && j==7)){
                printf("*");
            }
            else if((i==7 && j==8)){
                printf("*");
            }
            else if((i==6 && j==9)){
                printf("*");
            }
            else if((i==5 && j==9)){
                printf("*");
            }
            else if((i==4 && j==9)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR W - ALPHABET
void w(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1 || j==10){
                printf("*");
            }
            else if(i==9 && j==2){
                printf("*");
            }
            else if(i==8 && j==3){
                printf("*");
            }
            else if(i==7 && j==4){
                printf("*");
            }
            else if(i==6 && j==5){
                printf("*");
            }
            else if(i==7 && j==6){
                printf("*");
            }
            else if(i==8 && j==7){
                printf("*");
            }
            else if(i==9 && j==8){
                printf("*");
            }
            else if(i==10 && j==9){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR X - ALPHABET
void x(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if((i==1 && j==1)){
                printf("*");
            }
            else if((i==2 && j==2)){
                printf("*");
            }
            else if((i==3 && j==3)){
                printf("*");
            }
            else if((i==4 && j==4)){
                printf("*");
            }
            else if((i==5 && j==5)){
                printf("*");
            }
            else if((i==6 && j==5)){
                printf("*");
            }
            else if((i==7 && j==5)){
                printf("*");
            }
            else if((i==8 && j==4)){
                printf("*");
            }
            else if((i==9 && j==3)){
                printf("*");
            }
            else if((i==10 && j==2)){
                printf("*");
            }
            else if((i==1 && j==10)){
                printf("*");
            }
            else if((i==2 && j==9)){
                printf("*");
            }
            else if((i==3 && j==8)){
                printf("*");
            }
            else if((i==4 && j==7)){
                printf("*");
            }
            else if((i==5 && j==6)){
                printf("*");
            }
            else if((i==6 && j==6)){
                printf("*");
            }
            else if((i==7 && j==6)){
                printf("*");
            }
            else if((i==8 && j==7)){
                printf("*");
            }
            else if((i==9 && j==8)){
                printf("*");
            }
            else if((i==10 && j==9)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR Y - ALPHABET
void y(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 && j==1){
                printf("*");
            }
            else if(i==2 && j==2){
                printf("*");
            }
            else if(i==3 && j==3){
                printf("*");
            }
            else if(i==4 && j==4){
                printf("*");
            }
            else if(i==5 && j==5){
                printf("*");
            }
            else if(j==5 && i>10/2){
                printf("*");
            }
            else if(i==4 && j==6){
                printf("*");
            }
            else if(i==3 && j==7){
                printf("*");
            }
            else if(i==2 && j==8){
                printf("*");
            }
            else if(i==1 && j==9){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR Z - ALPHABET
void z(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==10){
                printf("*");
            }
            else if(i==2 && j==9){
                printf("*");
            }
            else if(i==3 && j==8){
                printf("*");
            }
            else if(i==4 && j==7){
                printf("*");
            }
            else if(i==5 && j==6){
                printf("*");
            }
            else if(i==6 && j==5){
                printf("*");
            }
            else if(i==7 && j==4){
                printf("*");
            }
            else if(i==8 && j==3){
                printf("*");
            }
            else if(i==9 && j==2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


//FOR ONE - NUMBER
void one(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==10 || j==7){
                printf("*");
            }
            else if( (i==2 && j<3)){
                printf(" ");
            }
            else if( (i==2 && j<8)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR TWO - NUMBER
void two(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==5 || i==10){
                printf("*");
            }
            else if( j==10 && i<10/2){
                printf("*");
            }
            else if(j==1 && i>10/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR THREE - NUMBER
void three(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==5 || i==10 || j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR FOUR - NUMBER
void four(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==5 || j==10){
                printf("*");
            }
            else if( j==1 && i<10/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//FOR FIVE - NUMBER
void five(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==5 || j==10){
                printf("*");
            }
            else if((j==1 && i<10/2)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR SIX - NUMBER
void six(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==5 || i==10 || j==1){
                printf("*");
            }
            else if((j==10 && i>10/2)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR SEVEN - NUMBER
void seven(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1){
                printf("*");
            }
            else if(j==9 && i==2){
                printf("*");
            }
            else if(j==8 && i==3){
                printf("*");
            }
            else if(j==7 && i==4){
                printf("*");
            }
            else if(j==6 && i==5){
                printf("*");
            }
            else if(j==5 && i==6){
                printf("*");
            }
            else if(j==4 && i==7){
                printf("*");
            }
            else if(j==3 && i==8){
                printf("*");
            }
            else if(j==2 && i==9){
                printf("*");
            }
            else if(j==1 && i==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR EIGHT - NUMBER
void eight(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==5 || i==10 || j==1 || j==10){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR NINE - NUMBER
void nine(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || i==5 || j==10){
                printf("*");
            }
            else if(j==1 && i<10/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//FOR 0 - NUMBER 
void zero(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1 || j==10 || i==10 || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
