#include<stdio.h>
#include<conio.h>

typedef struct {
    int age;
    char name[25];
}person;

typedef union {
    int a;
    char n[40];
}people;

int main(){
    person vamsi;
    strcpy(vamsi.name,"GUDIPATI VAMSI KRISHNA");
    vamsi.age = 17;

    printf("%s\t%d\n",vamsi.name,vamsi.age);

    people sai;
    strcpy(sai.n,"GUDIPATI SAI KRISHNA");
    printf("%s\n",sai.n);
    sai.a = 23;

    printf("%s\t%d\n",sai.n,sai.a);
    getch();
    return 0;
}
