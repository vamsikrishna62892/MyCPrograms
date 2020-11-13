#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char ch;

    printf("Enter a parameter : ");
    scanf("%c",&ch);

    printf("%c in lowercase : %c\n",ch,tolower(ch));
    printf("%c in uppercase : %c\n",ch,toupper(ch));
    printf("%d in lowercase : %d\n",ch,tolower(ch));
    printf("%d in uppercase : %d",ch,toupper(ch));

    getch();
    return 0;
}
