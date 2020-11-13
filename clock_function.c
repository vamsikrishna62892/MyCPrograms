#include<stdio.h>
#include<conio.h>
#include<time.h>


void display(){
printf("The time taken by the compiler to come here is %d sec\n",clock()/CLOCKS_PER_SEC);
}

int main(){
    getch();                // clock function is used to know the time taken by the pointer to come to the point by the compiler
    display();
    getch();

    display();
    getch();
    display();
    getch();
    printf("\n\nThe time taken by the compiler to come here is %d sec\n",clock()/CLOCKS_PER_SEC);
    getch();
    return 0;
}
