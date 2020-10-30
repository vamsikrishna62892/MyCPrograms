#include<stdio.h>
#include<conio.h>

struct student {
        char name[25];
        int class,roll,m1m,m2m,pm,cm;
        struct student *marks;
    } s1, s2 , s3 , s4 ;

int main(){
    s1.marks = &s2;
    s2.marks = &s3;
    s3.marks = &s4;
    struct student *c = &s1;
    struct student *c1 = &s1;
    while(c != NULL){
        printf("\nName : ");
        gets(c -> name);
        printf("\nRoll number : ");
        scanf("%d",&c -> roll);
        printf("\nMarks in maths(1A) : ");
        scanf("%d",&c -> m1m);
        printf("\nMarks in maths(2A) : ");
        scanf("%d",&c -> m2m);
        printf("\nMarks in physics : ");
        scanf("%d",&c -> pm);
        printf("\nMarks in chemistry : ");
        scanf("%d",&c -> cm);
        fflush(stdin);
        c = c-> marks;
    }
        c = NULL;
    while(c != NULL ){
        printf("\n Name : %s",c->name);
        printf("\nRoll number : %d",c->roll);
        printf("\nMarks in maths(1A) : %d",c->m1m);
        printf("\nMarks in maths(2A) : %d",c->m2m);
        printf("\nMarks in physics : %d",c->pm);
        printf("\nMarks in chemistry : %d",c->cm);
        c = c -> marks;
        }
getch();
return 0;
}
