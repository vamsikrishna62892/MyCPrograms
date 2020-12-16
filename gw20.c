#include<stdio.h>
#include<conio.h>

int main(){
    int *j;
    {
        int i =200;
        j =&i;
    }
    printf("%d",*j);
    getch();
    return 0;
}
