#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fp;
    char name[40];

    printf("Enter your name : ");
    gets(name);
    printf("\n");
    fp = tmpfile();
    if ( fp != NULL ){
        printf("File created successfully");
        fprintf(fp,"%s",name);

        rewind(fp);
        printf("\n");
        while(!feof(fp)){
            putchar(getc(fp));
        }
    }else{
        printf("File not created successfully");
    }
getch();
return 0;
}
