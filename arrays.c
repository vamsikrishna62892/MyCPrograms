#include<stdio.h>
#include<conio.h>

int main(){
    int marks[6],counter;
    for(counter=0;counter<6;counter++){
        scanf("%d",&marks[counter]);
    }
    for(counter=0;counter<6;counter++){
        printf("marks in %d subject is %d\n",counter+1,marks[counter]);
    }
    getch();
    return 0;
}
