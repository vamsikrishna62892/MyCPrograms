#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n;
    printf("Enter number of rows you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<2*n;j++){
            if(j<=i){
                printf("*");
            }else if(j<=2*n-i-1){
                printf("  ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<2*n;j++){
            if(j<=i){
                printf("*");
            }else if(j<=2*n-i-1){
                printf("  ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
