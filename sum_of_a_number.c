#include<stdio.h>
#include<conio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n>0){
        sum=n%10+sum;
        n/=10;
    }
    printf("%d",sum);
    getch();
    return 0;
}
