#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n;
    printf("Enter a length : ");
    scanf("%d",&n);
    fflush(stdin);
    char ch[n];
    printf("Enter the string : ");
    gets(ch);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( (i == j) || (j == n-1-i))
                printf("%c",ch[i]);
            else{
            printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
