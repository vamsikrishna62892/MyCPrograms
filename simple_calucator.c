#include<stdio.h>
#include<conio.h>

int main(){
    float n1,n2;
    char ch;
    printf("Enter the operator (+,-,*,/) : ");
    scanf("%c",&ch);
    printf("Enter two numbers : ");
    scanf("%f %f",&n1,&n2);
    switch(ch){
        case '+' :
            printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
            break;
        case '-' :
            printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
            break;
        case '*' :
            printf("%f * %f = %f",n1,n2,n1*n2);
            break;
        case '/' :
            if(n2 !=0.00000)
            printf("%f / %f = %f",n1,n2,n1/n2);
            else{
                printf("Denominator Should be greater than 0");
            }
            break;
        default :
            printf("Enter the opertor correctly");
            break;
    }
    getch();
    return 0;
}
