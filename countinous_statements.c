#include<stdio.h>
#include<conio.h>

int main(){
    int counter;
    for(counter=1 ;counter<=10 ;counter++ ){
        if(counter==6)
            continue;
    printf("%d\n",counter);
    }
    getch();
    return 0;
}

