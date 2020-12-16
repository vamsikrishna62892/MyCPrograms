#include<stdio.h>
#include<conio.h>

void one(){
    printf("one");
}

void two(){
    printf("two");
}

void three(){
    printf("three");
}

int main(){
    void ( * ptr[3])();

    ptr[0]= one;
    ptr[1] = two;
    ptr[2] = three;

    ptr[1]();       // it is similar to the call function

    getch();
    return 0;
}
