#include<stdio.h>
#include<conio.h>

int main(){
    int x =100,y=200;
    if((++x||++y)){
        printf("x = %d , y = %d",x,y);
    }else{
        printf("Condition failed!!");
    }
    getch();
    return 0;
}
