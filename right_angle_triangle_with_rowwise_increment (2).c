#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n,k;

    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0,k=i+1;j<=i;j++){
            if(j>0){
               k = k+(n-j);
               printf("%03d ",k);
            }else{
            printf("%03d ",i+1);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
