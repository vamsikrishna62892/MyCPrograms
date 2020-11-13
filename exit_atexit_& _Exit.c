#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void function(){
    puts("Terminating the program");
    getch();
}

int main(){
    printf("Starting of the program\n");
    if(atexit(function)!=0){
    int i=1;
    while (i<=10){
        printf("%d",i);
        i++;
    }
    }
    _Exit (0);
    printf("End of the program");
    getch();
    return 0;
}
