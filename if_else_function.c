#include<stdio.h>
#include<conio.h>

int main(){
    int age;
    printf("ENTER UR AGE : ");
    scanf("%d",&age);
    if(age>=18){
        printf("OK UR A MAJOR\n");
    }
    else{
        printf("OK UR A MINOR\n");
    }
    getch();
    return 0;
}
