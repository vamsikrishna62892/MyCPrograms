#include<stdio.h>
#include<conio.h>

int main(){
    int i,n;
    char na[] = "HELLO";
    n = strlen(na);
    na[0] = na[n];
    for(i=0;i<n;i++){
        printf("%s\n",(na+i));
    }
    getch();
    return 0;
}
