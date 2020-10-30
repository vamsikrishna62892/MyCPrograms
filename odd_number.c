#include<stdio.h>
#include<conio.h>

int main(){
int a,b;
    printf("\nENTER THE RANGE OF EVEN NUMBERS U WANT");
    printf("\nFROM : ");
    scanf("%d",&a);
    printf("\nTO : ");
    scanf("%d",&b);
    for(a,b;a<=b;a++){
            if(a%2!=0)
        printf("\n%d",a);
    }
    getch();
    return 0;
}
