#include<stdio.h>
#include<conio.h>

int main(){
    int n,mul=1;
    scanf("%d",&n);
    while(n>0){
        mul=n%10*mul;
        n/=10;
    }
    printf("%d",mul);
    getch();
    return 0;
}

