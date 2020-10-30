#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    int *p;
    int **q;
    scanf("%d",&x);
    p=&x;
    q=&p;
    printf("THE VALUE OF X IS %d\n",x);
    printf("THE ADDRESS OF X IS %u\n",&x);
    printf("THE ADDRESS STORED IN THE POINTER P IS %u\n",p);
    printf("THE ADDRESS OF POINTER P IS %u\n",&p);
    printf("THE VALUE POINTED BY THE POINTER P IS %d\n",*p);
    printf("THE ADDRESS STORED IN THE POINTER Q IS %u\n",q);
    printf("THE ADDRESS OF POINTER Q IS %u\n",&q);
    printf("THE VALUE POINTED BY THE POINTER Q IS %d\n",*q);
    printf("THE VALUE POINTER TO POINTER IS %d\n",**q);
    getch();
    return 0;
    }
