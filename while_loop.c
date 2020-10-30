#include<stdio.h>
#include<conio.h>

int main(){
    int counter=1,n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    while(counter<=n){
        printf("\t%d\n",counter);
        counter++;
    }
    getch();
    return 0;
}
