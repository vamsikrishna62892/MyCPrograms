#include<stdio.h>
#include<conio.h>

int main(){
    int km;
    printf("Enter the distance in kms : ");
    scanf("%d",&km);
    printf("%d kms in miles is %f miles",km,km*0.621371);
    getch();
    return 0;
}
