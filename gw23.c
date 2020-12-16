#include<stdio.h>
#include<conio.h>

int main(){
    static int i;
    for(++i;++i;++i){
        printf("%d\n",i);
        if(i==6)
            break;
    }
    getch();
    return 0;
}
