#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char ch = '\n';
//printf("Enter a parameter : ");
  //  scanf("%c",&ch);

    if (isprint(ch)){
        printf("%c is a printable character\n",ch);
    }else{
        printf("%c is not a printable character\n",ch);
    }

    if (iscntrl(ch)){
        printf("%c is a control character\n",ch);
    }else{
        printf("%c is not a control character",ch);
    }
    getch();
    return 0;
}
