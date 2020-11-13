#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter a float value : ");
    scanf("%f",&a);

    printf("Ceil value of %.2f is %f \n",a,ceil(a));
    printf("Floor value of %.2f is %f \n",a,floor(a));
    printf("Round value of %.2f is %f \n",a,round(a));

    getch();
    return 0;
}
