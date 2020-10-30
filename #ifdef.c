#include<stdio.h>
#include<conio.h>
#define WINDOWS

int main(){
#ifdef WINDOWS
    printf("YOUR A WINNDOWS USER\n");
#endif
getch();
return 0;
}
