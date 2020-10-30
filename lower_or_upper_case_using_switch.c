#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("A PROGRAM TO TEST THE GIVEN CHARACTER IS IN LOWERCASE OR UPPERCASE");
    printf("\nENTER A CHARACTER : ");
    scanf("%c",&ch);
    switch( ch ){
    case 'A' ... 'Z':
        printf("\n%c is a UPPERCASE ALPHABET",ch);
        break;
    case 'a' ... 'z':
        printf("\n%c is a LOWERCASE ALPHABET",ch);
        break;
    default:
        printf("\n%c is not a alphabet",ch);
    }
    getch();
    return 0;
}
