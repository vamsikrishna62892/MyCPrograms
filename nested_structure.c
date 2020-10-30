#include<stdio.h>

int main(){
    struct address {
        int hno;
        int pin;
        long long int  pn;

    };
    struct person {
        char name[25];
        int age;
        struct address addr;
    } p1 ;
    printf("enter your name : ");
    gets(p1.name);
    fflush(stdin);
    printf("\nenter your age : ");
    scanf("%d",&p1.age);
    printf("\nenter your house number : ");
    scanf("%d",&p1.addr.hno);
    printf("\nenter your area pincode : ");
    scanf("%d",&p1.addr.pin);
    printf("\nenter your phone number : ");
    scanf("%lld",&p1.addr.pn);
    printf("name : %s\n",p1.name);
    printf("age : %d\n",p1.age);
    printf("phone number : %lld\n",p1.addr.pn);
    printf("pincode : %d\n",p1.addr.pin);
getch();
return 0;
}
