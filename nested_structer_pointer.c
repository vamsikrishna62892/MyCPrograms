#include<stdio.h>

int main(){
    struct address {
        char hn[100];
        int pin;
        long long int pn;
    } addr1 ;
    struct person {
        char name[25];
        int age;
        struct address *ptr;
    }p1;
    p1.ptr = &addr1;
    printf("Name : ");
    gets(p1.name);
    fflush(stdin);
    printf("\nAge : ");
    scanf("%d",&p1.age);
    fflush(stdin);
    printf("\nHouse name : ");
    gets(p1.ptr->hn);
    printf("\nPhone number : ");
    scanf("%lld",&p1.ptr->pn);
    printf("\nPincode : ");
    scanf("%d",&p1.ptr->pin);
    printf("\nName : %s",p1.name);
    printf("\nAge : %d",p1.name);
    printf("\nHouse name : %s",p1.ptr->hn);
    printf("\nPhone number : %lld",p1.ptr->pn);
    printf("\nPincode : %d",p1.ptr->pin);
    getch();
    return 0;
    }
