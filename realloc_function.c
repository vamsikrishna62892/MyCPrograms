#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    char *str;
    int len,len1;

    printf("Enter the length of the string : ");
    scanf("%d",&len);

    str = (char *)malloc(sizeof(char)*len+1);

    if(str == NULL){
        printf("Unable to allocate memmory");
    }else{
            fflush(stdin);
            printf("Enter your name : ");
            gets(str);
            printf("Enter ur surname length : ");
            scanf("%d",&len1);
            char str1[len1];
            fflush(stdin);
            printf("Enter ur surname : ");
            gets(str1);
            str = (char *)realloc(str,sizeof(char)*len+len1+1);
            strcat(str,str1);
            printf("%s",str);
    }
    free(str);
    getch();
    return 0;
}
