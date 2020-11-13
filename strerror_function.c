#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int i;
    for (i=0; i<=42; i++){
        printf("strerror message for %d number is %s\n",i,strerror(i));
    }
    getch();
    return 0;
}
