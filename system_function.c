#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    char ch[50];

    printf("Enter your command here : ");
    gets(ch);

    if (system(NULL) == 0){
        printf("Command prompt is not present in your pc");
    }else{
        system(ch);
    }
    getch();
    return 0;
}
