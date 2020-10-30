#include<stdio.h>
#include<conio.h>

int main(){
    int age;
    printf("ENTER UR AGE : ");
    scanf("%d",&age);
    age>=18? printf("YOU ARE AN ADULT") : printf("YOU ARE TEENAGER");
    getch();
    return 0;
}
