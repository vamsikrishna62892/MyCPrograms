#include<stdio.h>
#include<conio.h>

void display(int marks[],int size){
    int counter1;
    for(counter1=0;counter1<size;counter1++){
    printf("%d\n",marks[counter1]);
    }
    return 0;
}



int main(){
    int marks[6],counter;
    for(counter=0;counter<6;counter++){
        scanf("%d",&marks[counter]);
        }
        display(marks,6);
        getch();
        return 0;
}
