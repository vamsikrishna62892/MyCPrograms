#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;

    printf("Enter 2 values : ");
    scanf("%d%d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d\t%d",a,b);
    getch();
    return 0;
}

