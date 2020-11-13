#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    char num1[] = "2345",num2[] = "1234";
    int n1,n2;

    n1 = atoi(num1);
    n2 = atoi(num2);

    printf("number 1: %d\tnumber 2 : %d\n",n1,n2);
    printf("add : %d",n1+n2);
    getch();
    return 0;
}
