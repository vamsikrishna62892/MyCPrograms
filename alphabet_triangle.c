#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n;
    int ch = 65;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%c ",ch++ );
        }
        printf("\n");
    }
    getch();
    return 0;
}
