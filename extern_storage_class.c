#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void display() {
    extern int x;       //we cannot use the global declared variable unless we use the keyword extern datatype variable
    printf("%d",x);
}

int main(){
    extern int x;
    printf("%d\n",x);
    display();
    getch();
    return 0;
}

int x = 152;            //we can declare the values where we want if we use the extern keyword
