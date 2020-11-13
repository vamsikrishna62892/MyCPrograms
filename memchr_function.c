#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char *p;
    char data[] = "G vamsi krishna";
    char search = 'v';
    p = memchr(data,search,strlen(data));
    if (p != NULL){
        puts(p);
    }
    else{
        puts("Character is not found");
    }
    getch();
    return 0;
}
