#include<stdio.h>
#include<conio.h>
#define vamsi main

int vamsi(){
    printf("Hello World!\n");
    getch();
    return 0;
}
/*
here we are writing the program without main function so we are using #define to replace with the main function . here we are not using main
function but internally we are using main functon

While compiling the program it search for macrons is present or not if present its defines it here we are using #define vamsi main
main function is replaced with vamsi */
