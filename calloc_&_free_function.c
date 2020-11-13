#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int *marks,len,i;

    marks = (int *)calloc(len,sizeof(int));

    printf("Enter number of subjects : ");
    scanf("%d",&len);
    if (marks == NULL){
        printf("\nUnable to create the heap");
    }else{
        fflush(stdin);
        printf("\nSuccessfully created heap");
        for (i=0;i<len;i++){
            printf("\nEnter marks of %d subject : ",i+1);
            scanf("%d",&marks[i]);
        }
        for (i=0;i<len;i++){
        printf("\nEnter marks of %d subject : %d",i+1,marks[i]);
    }
    free(marks);
 }
    getch();
    return 0;
}
