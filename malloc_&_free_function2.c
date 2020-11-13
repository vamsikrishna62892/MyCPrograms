#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int length;
    char *p;

    printf("Enter your size of the string : ");
    scanf("%d",&length);
    printf("\n");
    p = (char *)malloc(sizeof(char)*length+1);
    if ( p == NULL){
        printf("Unable to create the heap memory");
    }else{
        fflush(stdin);
        printf("Now u can enter your string : ");
        gets(p);
        printf("%s",p);
        free(p);
    }
getch();
return 0;
}
