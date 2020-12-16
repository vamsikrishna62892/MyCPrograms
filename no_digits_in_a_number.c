#include<stdio.h>
#include<conio.h>

int main(){
    int n,i=1;
    scanf("%d",&n);
    i=ceil(log10(n));
    printf("%d",i);
    getch();
    return 0;
}
