#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char str[] = { 'h', 'e' , 'l' , 'l' , 'o' };
    char str1[] = { 'h', 'e' , 'l' , 'l' , 'o' , '\0' };

    if(strcmp(str,str1))
        printf("Strings are not equal");
    else
        printf("Strings are equal");

    getch();
    return 0;
}
