#include<stdio.h>
#include<conio.h>
#define MARK 95

int main(){
#if MARK>=75
    printf("your marks are greater than 75\n");
    printf("you got a grade A\n");
#elif MARK>=50
    printf("your marks are greater than 50 and less than 75\n");
    printf("you got a grade B\n");
#else
    printf("your marks are less than 50");
#endif
getch();
return 0;
}
