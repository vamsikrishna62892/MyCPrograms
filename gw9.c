#include<stdio.h>
#include<conio.h>

#define int char
int main(){
    int i = 65;

    printf("Sizeof(i) = %d bytes",sizeof(i));

    getch();
    return 0;
}
