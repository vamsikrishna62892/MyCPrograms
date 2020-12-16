#include<stdio.h>
#include<conio.h>

int main(){
    extern int i;

    printf("%d",i);

    getch();
    return 0;
}
int i = 200;
