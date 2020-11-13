#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int len;
    printf("Enter your string length : ");
    scanf("%d",&len);
    fflush(stdin);
    char from[len+1],to[len+1];
    printf("Enter your string : ");
    gets(from);
    memmove(from,from+6,len);
    printf("%s\n",from);
    printf("Successfully copied your memory\n");
    getch();
    return 0;
}
