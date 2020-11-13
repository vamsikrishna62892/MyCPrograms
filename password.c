#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int len = 11,res,i;
    char str[11];
    char str1[12],str2[12];
    FILE *fp,*fp1;

    fp=fopen("memcmp.txt","r");

    if(fp==NULL){
        printf("UNABLE TO OPEN THE FILE\n");
       }else{
        fgets(str,12,fp);
        fclose(fp);
       }
    printf("Enter your password : ");
    gets(str1);
    res = memcmp(str,str1,len);
    if (res == 0){
        printf("Your password is correct\n");
    }else{
        printf("your password is incorrect\n");
        getch();
        exit(0);
    }
    printf("If you want to change your password press 1 and press 0 to cancel : ");
    scanf("%d",&i);
    if (i==1){
    fp1=fopen("memcmp.txt","w");
        if(fp1==NULL){
            printf("UNABLE TO OPEN THE FILE\n");
        }else{
            fflush(stdin);
            printf("Enter your new password : ");
            gets(str2);
            fprintf(fp1,"%s",str2);
            printf("Password changed successfully");
            fclose(fp);
       }
    }else
    getch();
    return 0;
}
