#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
storage class are divided into four types
1. automatic
2. register
3. static
4. external
*/
int main(){

{
    auto int kk;        // the variablr x has life in the starting and ending of {} and these are known as block
    printf("%d",kk);    // automatic storage class store the default value in the data types as garbage value
}
   // printf("%d",kk);
    getch();
    return 0;
}
