#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("\nENTER FROM WHICH THE SQUARE OF A NUMBER WILL START : ");
    scanf("%d",&a);
    printf("\nENTER A VALUE WHEN IT WILL STOP : ");
    scanf("%d",&b);
    for(a,b; a<=b ; a++){
        c=a*a;
        printf("\nSQUARE OF A NUMBER %d IS %d",a,c);
    }
    getch();
    return 0;
}
