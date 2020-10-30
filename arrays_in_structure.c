#include<stdio.h>
#include<conio.h>
struct student {
    char name[25];
    int roll;
};

int main(){
    int size,i;
    printf("Enter your how many students you need to enter : ");
    scanf("%d",&size);
    printf("\n");
    struct student s[size];
    for ( i=0 ; i<size ; i++ ){
        fflush(stdin);
        printf("Enter your student %d details\n",i+1);
        printf("Name : ");
        gets(s[i].name);
        printf("Roll number : ");
        scanf("%d",&s[i].roll);
    }
    printf("\n\n");
    for ( i=0 ; i<size ; i++){
        printf("Name : %s\nRoll number : %d\n",s[i].name,s[i].roll);
    }
    getch();
    return 0;
}
