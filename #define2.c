#include<stdio.h>
#include<conio.h>
#define LIMIT 10
#define TOP (LIMIT+1)

int main(){
    int counter;
    for(counter=1 ; counter<=TOP ; counter++){
        printf("%d\n",counter);
    }
    getch();
    return 0;
}

