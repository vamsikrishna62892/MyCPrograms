#include<stdio.h>
#include<conio.h>

int main(){
    int x = -1 ,y = -1;
    if( ++x == ++y){
        printf("YES");
    }else
        printf("NO");
    getch();
    return 0;
}
