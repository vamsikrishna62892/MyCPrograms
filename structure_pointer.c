#include<stdio.h>

int main(){\
    struct student {
        char name[25];
        int age;
        float cgpa;
    } s1 ;
    printf("enter your name : ");
    gets(s1.name);
    fflush(stdin);
    printf("\nenter your age and cgpa : ");
    scanf("%d %f",&s1.age,&s1.cgpa);
    struct student *p;
    p = &s1;
    printf("\naddrees of s1 : %u",p);
    printf("\naddrees of name : %u and name : %s",&(p->name),p->name);
    printf("\naddrees of age : %u and age : %d",&((*p).age),(*p).age);
    printf("\naddrees of cgpa : %u and cgpa : %.2f",&((*p).cgpa),(*p).cgpa);
getch();
return 0;
}

/*here we can write pointer variables in two types
    to retrive a value stored in the variable x points to pointer p we can write command in two types
            1 p->x.name or (*p).name
            to get the address of the pointer we use &(p->name) or &((*p).name)                     */
