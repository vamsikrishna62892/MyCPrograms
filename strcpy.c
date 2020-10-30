#include<stdio.h>
#include<conio.h>

int main(){
    char source[25],target[25];

    printf("ENTER YOUR STRING : ");
    gets(source);
    printf("YOU STRING COPIED TO ANOTHER VARIABLE \n");
    strcpy(target,source);
    printf("ORIGINAL STRING : %s\n",source);
    printf("COPIED STRIN : %s\n",target);
getch();
return 0;
}
