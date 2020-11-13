#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter a number to get square and cubic root : ");
    scanf("%d",&a);
    printf("Square root of %d is %f\n",a,sqrt(a));
    printf("Cubic root of %d is %f\n",a,cbrt(a));
    getch();
    return 0;
}
