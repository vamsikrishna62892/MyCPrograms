#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n,k;

    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0,k=1;i<n;i++){
        for(j=0;j<=i;j++,k++){
            printf("%02d ",k);
        }
        printf("\n");
    }
    getch();
    return 0;
}
