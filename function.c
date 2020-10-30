#include<stdio.h>
#include<conio.h>


void function1();
void function2();

int main(){
    printf("IN MAIN FUNCTION\n");
    printf("CALLING FUNCTION1\n");
    function1();
    getch();
    return 0;
    }

void function1(){
    printf("IN FUNCTION1\n");
    printf("CALLING FUNCTION2\n");
    function2();
    printf("RETURNING FROM FUNCTION1 TO MAIN FUNCTION\n");
}
void function2(){
    printf("IN FUNCTION2\n");
    printf("RETURNING FROM FUNCTION2 TO FUNCTION1\n");
}
