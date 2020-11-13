#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter a parameter : ");
    scanf("%c",&ch);

    if (ispunct(ch)!=0){
        printf("%c is a punctuation mark\n",ch);
    }else{
        printf("%c is not a punctuation mark\n",ch);
    }

    if(isspace(ch)!=0){
        printf("%c is a white space\n",ch);
    }else{
        printf("%c is not a white space\n",ch);
    }
    getch();
    return 0;
}
