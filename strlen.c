#include<stdio.h>
#include<conio.h>

int main(){
    char ch[20];
    int i,len;
    len=strlen(ch);
    printf("ENTER YOUR STRING : ");
    gets(ch);
    printf("LENGTH OF %s is %d \n",ch,strlen(ch));
getch();
return 0;
}
