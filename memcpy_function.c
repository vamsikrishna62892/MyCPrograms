#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int len;
    printf("Enter your string length : ");
    scanf("%d",&len);
    fflush(stdin);
    char from[len],to[len];
    printf("Enter your string : ");
    gets(from);
    memcpy(to,from,len);
    printf("%s\n",to);
    printf("Successfully copied your memory\n");
    getch();
    return 0;
}
