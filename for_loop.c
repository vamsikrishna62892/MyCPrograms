#include<stdio.h>
#include<conio.h>

int main(){
    int counter,n;
    printf("ENTER A VALUE : ");
    scanf("%d",&n);
    for(counter=1; counter<=n ; counter++){
        printf("%d\n",counter);
    }
    getch();
    return 0;
}
