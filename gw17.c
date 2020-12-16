#include<stdio.h>
#include<conio.h>

int main(){
    static var =5;
    printf("%d",var--);
    if(var)
        main();
    getch();
    return 0;
}
