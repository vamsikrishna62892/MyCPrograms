#include<stdio.h>
#include<conio.h>

int main(){
    char ch;

    FILE *fp;

    fp = fopen("fgetc2.c","r");
    if (fp == NULL){
        printf("Unable to open a file");
    }else{
        while(!feof(fp)){
                ch = fgetc(fp);
                printf("%c\n",ch);
        }
        fclose(fp);
    }
    getch();
    return 0;
}
