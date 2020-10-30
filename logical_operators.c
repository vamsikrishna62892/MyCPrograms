#include<stdio.h>
#include<conio.h>

int main(){
    int age;
    printf("ENTER UR AGE : ");
    scanf("%d",&age);
    // && for and || for or operator
    if(age<=18 && age>=13){
        printf("UR A TEENAGER\n");
    }
    else{
        printf("UR NOT A TEENAGER");
    }
    getch();
    return 0;
}
