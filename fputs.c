#include<stdio.h>
#include<conio.h>

int main(){
    char in[50];
    FILE *fp;
    fp = fopen("fputs.txt","a");
    if(fp==NULL){
        printf("UNABLE TO OPEN THE FILE\n");
    }else{
        printf("ENTER THE TEXT YOU WANT TO STORE IN A FILE : \n");
        gets(in);
        fputs(in,fp);
        printf("YOU HAVE SUCCESSFULLY STORED THE DATA\n");
        fclose(fp);
        }
getch();
return 0;
}
