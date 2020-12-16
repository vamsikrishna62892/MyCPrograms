#include<stdio.h>
#include<conio.h>

int r(){
    static int num = 7;
    return num--;
}
int main(){
    for(r();r();r()){
        printf("%d\t",r());
    }
    getch();
    return 0;
}
