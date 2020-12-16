#include<stdio.h>
#include<conio.h>
#define square(x) x*x
int main(){
    int a = 10;
    int b = square(a+4);

    printf("a = %d\nb = %d",a,b);
    getch();
    return 0;
}
