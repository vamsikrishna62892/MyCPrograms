#include<stdio.h>
#include<conio.h>

int main(){
    float area,peri,pi=3.14,r;

    printf("Enter the radius of a circle : ");
    scanf("%f",&r);

    area = pi * r * r;
    peri = 2 * pi * r;

    printf("Area : %.2f \nPerimeter : %.2f",area,peri);
    getch();
    return 0;
}
