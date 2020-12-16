#include<stdio.h>
#include<conio.h>

int main(){
    int i = 0, res = 100;

    for( ; i++ ; i--){
        res += 10;
    }
    printf("%d",res);
    getch();
    return 0;
}
