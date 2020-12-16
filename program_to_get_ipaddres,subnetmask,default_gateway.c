#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    if (system(NULL) == 0){
        printf("Command prompt is not present in your pc");
    }else{
        system("ipconfig");
        printf("Detailed information about pc \n");
        system("ipconfig /all");
    }
    getch();
    return 0;
}

