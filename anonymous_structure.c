#include<stdio.h>

int main(){
    struct {
        int age;
        char name[20];
    }s1={0},s2={0};
    scanf("%d %d",&s1.age,&s2.age);
    printf("%d %d",s1.age,s2.age);
    fflush(stdin);
    printf("name : ");
    gets(s1.name);
    printf("name : ");
    gets(s2.name);
    printf("%s %s",s1.name,s2.name);
getch();
return 0;
}
