#include<stdio.h>
#include<conio.h>

int main(){
    int len,i,max,min;
    printf("Enter the length of the array : ");
    scanf("%d",&len);
    int arr[len];

    for(i=0;i<len;i++){
        printf("Enter your parameter : ");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i=1;i<len;i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if (min>arr[i]){
            min = arr[i];
        }
    }
    printf("Maximum value : %d\n",max);
    printf("Minimum value : %d",min);
    getch();
    return 0;
}
