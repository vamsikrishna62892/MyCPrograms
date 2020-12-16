#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,j,k,l;
    printf("Enter number of rows to be printed : ");
    scanf("%d",&n);

    for(i=1,l=1;i<2*n;i+=2,l++){
        for(j=1;j<=i;j++){
            if(j == 1){
                for( k = n-l;k>0;k--){
                    printf(" ");
                }
            }
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
