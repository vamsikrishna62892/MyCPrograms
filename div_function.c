#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int a,b;
    div_t n;
    printf("Enter numerator and denominator : ");
    scanf("%d%d",&a,&b);
    n = div(a,b);
    printf("The remainder : %d\nThe quotient : %d",n.rem,n.quot);

    getch();
    return 0;
}
