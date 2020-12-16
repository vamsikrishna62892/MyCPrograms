#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int x;

    printf("Enter 1 to shutdown your computer \nEnter 2 to restart your computer \nEnter 3 to logoff from your computer\nEnter 0 to cancel the program\n");
    printf("Enter a value : ");
    scanf("%d",&x);

    if ( x == 1 ){
        system("shutdown/s");
    }

    if ( x == 2 ){
        system("shutdown/r");
    }

    if ( x == 3){
        system("shutdown/l");
    }

    if ( x == 0){
        exit(0);
    }
    if ( x >3 || x<0) {
        printf("Enter a correct value");
    }
    getch();
    return 0;
}

