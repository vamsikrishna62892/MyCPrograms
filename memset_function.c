#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char data[20];

    memset(data,'\0',20);
    puts(data);
    memset(data,'V',20);
    puts(data);
    memset(data,'A',20);
    puts(data);
    memset(data,'M',20);
    puts(data);
    memset(data,'S',20);
    puts(data);
    memset(data,'I',20);
    puts(data);
    getch();
    return 0;

}
