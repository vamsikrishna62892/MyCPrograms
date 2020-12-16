#include<stdio.h>
#include<conio.h>

int main(){
    int row,n,space,symbol;
    printf("Enter number of rows to be printed : ");
    scanf("%d",&n);
    for(row = 1;row<=n;row++){
        for(space = 1;space<=n-row;space++){
            printf(" ");
        }
        for( symbol = 1;symbol<=2*row-1;symbol++){
            printf("*");
        }
        printf("\n");
    }
    for(row = n-1;row>0;row--){
        for(space = 1;space<=n-row;space++){
            printf(" ");
        }
        for( symbol = 1;symbol<=2*row-1;symbol++){
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

