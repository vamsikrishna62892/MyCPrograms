#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char ch;

    printf("Enter a parameter : ");
    scanf("%c",&ch);

    if (islower(ch)!=0){
        printf("%c is in lower case\n",ch);
    }else{
        printf("%c is not in lower case\n",ch);
    }

    if (isupper(ch)!=0){
        printf("%c is in upper case\n",ch);
    }else{
        printf("%c is not in upper case\n",ch);
    }
    getch();
    return 0;
}
