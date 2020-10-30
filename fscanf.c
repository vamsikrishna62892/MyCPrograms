#include<stdio.h>
#include<conio.h>

int main(){
    char ch[10];
    FILE *fp;

    fp=fopen("fscanf.txt","r");

    if(fp==NULL){
        printf("UNABLE TO OPEN THE FILE\n");
       }else{
        fscanf(fp,"%s",ch);
        printf("%s",ch);
        fclose(fp);
       }
getch();
return 0;
}
