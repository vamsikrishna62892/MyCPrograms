#include<stdio.h>
#include<conio.h>

int main(){
    int status;
    char name[40];
    FILE *fp;

    printf("Enter your full name : ");
    gets(name);

    fp = fopen("ferror.txt","r");

    if ( fp != NULL ){
            fprintf(fp,"%s\n",name);
            status = ferror(fp);
            printf("%d\n",status);
            clearerr(fp);
            status = ferror(fp);
            printf("%d\n",status);
            if ( status == 0){
                printf("no errors while opening file occured");
            }else{
                printf("read or write error occured");
            }
            fclose(fp);
    }else{
    printf("\nFile doesn't open sucessfully");
    }
    getch();
    return 0;
}
