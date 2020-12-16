#include<stdio.h>
#include<conio.h>

int main(){
    float c;
    printf("Enter the temperature in celsius :  ");
    scanf("%f",&c);
    printf("%.2f C celsius in farenheit is %.2f F",c,(c*1.8)+32);
    getch();
    return 0;
}
