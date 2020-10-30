#include<stdio.h>
#include<conio.h>

int main(){
    char sur[25],mid[25],last[25];

    printf("ENTER YOUR SURNAME : ");
    gets(sur);
    printf("ENTER YOUR MIDNAME : ");
    gets(mid);
    printf("ENTER YOUR LASTNAME : ");
    gets(last);
    strcat(mid,last);
    strcat(sur,mid);
    printf("YOUR FULL NAME IS %s",sur);
getch();
return 0;
}
