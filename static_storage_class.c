#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static int y = 6;     //declaraation can be done globally

void inc(){
    printf("%d\n",++y);     //we can increment and decrement the values
}

void dec(){
    {
    static int xy;
    printf("%d\n",--xy);
    }
}

int main(){
    {
        static int x;       //here the variable data value is most commonly stored in the heap
        printf("%d\n",x);   //the iniital value of the static storage class is zero ( 0 )
    }
    //printf("%d",x)        //error occured bcoz we are writing out of the local block
    printf("%d\n",y);
    inc();
    dec();
    getch();
    return 0;
}
