#include<stdio.h>
#include<conio.h>

#define TRUE 0&&1
#define FALSE 0||1

int main(){
    int x = FALSE;
    if(TRUE){
        x=TRUE;
    }
    printf("x = %d",x);
    getch();
    return 0;
}
