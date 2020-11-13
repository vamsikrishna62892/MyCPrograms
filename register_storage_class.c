#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    {
        register int x;     //the initial value stored default is garbage value
        printf("%d",x);     //here we are storing the data in the cpu register so the complilation time will be reduced if we use the variable repeatedly in registers
    }
  //  printf("%d",x);   //error occurs bcoz the variable x is used in the block after the block it automatically deletes
    getch();
    return 0;
}
