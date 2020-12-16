#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    FILE *fp;

    fp = fopen(__FILE__,"r");   //__FILE__ is used to get the address of current working file of c
    if (fp == NULL){
        printf("Unable to open a file");
    }else{
        while(!feof(fp)){
                ch = fgetc(fp);
                printf("%c",ch);
        }
        fclose(fp);
    }
    getch();
    return 0;
}
