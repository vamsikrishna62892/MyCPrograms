#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char a[] = "12345\0";
    int len = strlen(a);

    printf("%d",++len);
    getch();
    return 0;
}
