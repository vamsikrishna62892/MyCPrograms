#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    char ch[30];
    printf("Enter your string : ");
    gets(ch);
    for (i=0;ch[i]!='\0';i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i] = ch[i] +32;
        }else if(ch[i]>='a' && ch[i]<='z'){
            ch[i] = ch[i]-32;
        }
    }
    printf("Toggle : %s",ch);
    getch();
    return 0;
}
