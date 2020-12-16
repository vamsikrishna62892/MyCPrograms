#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,temp=0;

    printf("Enter 2 values : ");
    scanf("%d%d",&a,&b);

    temp = a;
    a = b;
    b = temp;
    printf("%d\t%d",a,b);
    getch();
    return 0;
}
