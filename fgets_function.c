#include<stdio.h>
#include<conio.h>

int main(){
    char ch[50];
    FILE *fp;

    fp = fopen("bio.txt","r");
    if (fp == NULL){
        printf("Unable to open the file");
    }else{
        while(!feof(fp)){
            fgets(ch,50,fp);
            printf("%s",ch);
        }
        fclose(fp);
    }
    getch();
    return 0;
}
