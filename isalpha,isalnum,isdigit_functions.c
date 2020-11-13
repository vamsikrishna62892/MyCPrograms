#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char ch;

    printf("Enter a parameter : ");
    scanf("%c",&ch);
    if(isalpha(ch)!=0){
        printf("%c is a alphabet\n",ch);
    }else{
        printf("%c is not a alphabet\n",ch);
    }
    if(isdigit(ch)!=0){
        printf("%c is a digit\n",ch);
    }else{
        printf("%c is not a digit\n",ch);
    }
    if(isalnum(ch)!=0){
        printf("%c is a alphabet or a digit\n",ch);
    }else{
        printf("%c is not a alphabet or a digit\n",ch);
    }
    getch();
    return 0;
}
