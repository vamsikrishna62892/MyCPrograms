#include<stdio.h>
#include<conio.h>

int main(){
    int number;
    scanf("%d",&number);
    switch(number){
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3 ... 10:
        printf("the number in between 2 and 10\n");
        break;
    default:
        printf("more than 10\n");
        }
        getch();
        return 0;
}
