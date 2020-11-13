#include<stdio.h>
#include<conio.h>


union student {
    char name[25];
    int roll,age;
}s1;

void display (union student *k){
    printf("\n\nIn display function\n");
    printf("%s",k->name);
}

int main(){
   printf("Enter your name : ");
   gets(s1.name);
   display(&s1);
   getch();
   return 0;
}
