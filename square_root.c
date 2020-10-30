#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int a,b;
    float c;
    printf("\nENTER THE RANGE OF SQUARE ROOT DO U WANT");
    printf("\nFROM : ");
    scanf("%d",&a);
    printf("\nTO : ");
    scanf("%d",&b);
    for(a,b;a<=b;a++){
    c=sqrt(a);
    printf("\nSQUARE ROOT OF %d IS %f",a,c);
    }
    getch();
    return 0;
}
