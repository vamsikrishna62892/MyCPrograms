#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fp;
    char ch;

    fp=fopen("bio.txt","r");
    if (fp==NULL){
        printf("UNABLE TO OPEN THE FILE");
    }else{
        while(!feof(fp)){   //feof is used to know whether the line ends in file
            ch = fgetc(fp);
            printf("%c",ch);
        }
        fclose(fp);
        }
getch();
return 0;
}
