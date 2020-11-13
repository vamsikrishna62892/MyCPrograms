#include<stdio.h>
#include<conio.h>

union student {
    int roll,pin;
    char name[24];
}s1;
int main(){

    printf("Enter your name : ");
    gets(s1.name);
    printf("name %s",s1.name);
    fflush(stdin);
    printf("\nEnter your roll no : ");
    scanf("%d",&s1.roll);
    printf("%d",s1.roll);
    printf("\nEnter your pincode : ");
    scanf("%d",&s1.pin);
    printf("\n pin %d",s1.pin);
    printf("\nname %s",s1.name);
    printf("\n roll no %d",s1.roll);
    printf("\n pin %d",s1.pin);
    printf("\n %s %d %d",s1.name,s1.roll,s1.pin);

getch();
return 0;
}
