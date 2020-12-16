#include<stdio.h>
#include<conio.h>

int main(){
    char p[] = "%d";
    p[1] = 'c';

    printf(p,65);
    getch();
    return 0;
}
