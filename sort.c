#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n,min,temp=0;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int a[n];//={25,9,-10,99};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        min=a[i];
        for(j=i;j<n;j++){
            if(min>a[j]){
                min = a[j];
            }
        }
        //printf("%d ",min);
        for(j=i;j<n;j++){
            if(min>=a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
    return 0;
 }
