#include<stdio.h>
#include<conio.h>

int main(){
    int x = 0;
    for(;x<10;x+=3){
        x = x*x;
    }
    printf("x = %d",x);
    getch();
    return 0;
}
