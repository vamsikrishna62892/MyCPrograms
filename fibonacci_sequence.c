#include<stdio.h>
#include<conio.h>

int main(){
    int i=0,j=1,n,len,fab;
    printf("Enter number of sequence series u want : ");
    scanf("%d",&len);
    printf("%d  %d ",i,j);
    for (n = 0;n<len-2;n++){
        fab = i+j;
        i = j;
        j = fab;
        printf(" %d ",fab);
    }
    getch();
    return 0;
}
