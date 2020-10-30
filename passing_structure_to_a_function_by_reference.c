#include<stdio.h>

struct student {
    char name[25];
    int roll,age;
}s1;

void show (struct student *s) {
   printf("%s\t%d\t%d",s->name,s->age,s->roll);
}

int main(){
   printf("Enter your name : ");
   gets(s1.name);
   printf("Enter your age & roll number : ");
   scanf("%d%d",&s1.age,&s1.roll);
   show(&s1);
   getch();
   return 0;
}

