#include<stdio.h>
#include<conio.h>

int main(){
    char *str;

    str = "hello";
    printf("%c",*&*str);
    getch();
    return 0;
}
