#include<stdio.h>
#include<conio.h>

void display(int a,int b){
    printf("a value is %d & b value is %d\n",a,b);
    a=100;
    b=200;
    printf("after change a value is %d & b value is %d\n",a,b);
}

int main(){
    int x=10,y=20;
    printf("x value is %d & y value is %d\n",x,y);
    display(x,y);
    printf("after change in display function value is %d & y value is %d\n",x,y);
    getch();
    return 0;
}
