#include<stdio.h>
#include<conio.h>

int main(){
    int x=100,y=200;

    if ((x-=100) && (y-=100)){
        printf("X = %d\nY = %d",x,y);
    }else{
        printf("X = %d\nY = %d",x,y);
    }
    getch();
    return 0;
}
