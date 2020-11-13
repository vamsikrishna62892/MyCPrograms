#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    double base,exp;
    printf("Enter the base and exponent value : ");
    scanf("%lf%lf",&base,&exp);
    printf("%lf to the power of %lf is %lf\n",base,exp,pow(base,exp));
    getch();
    return 0;
}
