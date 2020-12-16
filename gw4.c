#include<stdio.h>
#include<conio.h>

#define NULL 0
#define TRUE 1
#define FALSE -1

int main(){
    if(NULL)
        printf("NULL");
    else if(FALSE)\
        printf("TRUE");
    else
        printf("FALSE");

    getch();
    return 0;
}
