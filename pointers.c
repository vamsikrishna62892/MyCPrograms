#include<stdio.h>
#include<conio.h>

int main(){
    int x=11;
    int *j;
    j=&x;
    printf("THE VALUE OF X IS %d\n",x);
    printf("THE ADDRESS OF i.e is &X is %p\n",&x);
      printf("THE ADDRESS OF i.e is &X as u is %u\n",&x);
    printf("THE VALUE IN ADRESS OF *(&X) IS %d\n",*(&x));
    printf("THE ADDRESS STORED IN J IS %p\n",j);
    printf("THE ADDRESS OF J IS %p\n",&j);
    printf("THE VALUE STORED IN THE J IS %d\n",*j);
    getch();
    return 0;
    }
