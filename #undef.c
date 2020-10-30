#include<stdio.h>
#include<conio.h>
#define WINDOWS
#undef WINDOWS

int main(){
#ifndef WINDOWS
    printf("YOUR NOT A WINNDOWS USER\n");
#endif
getch();
return 0;
}
