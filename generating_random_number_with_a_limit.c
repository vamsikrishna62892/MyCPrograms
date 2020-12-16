#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,n,up,low,num;

    printf("How many random number you want : ");
    scanf("%d",&n);
    printf("Enter your limit (upper and lower) : ");
    scanf("%d %d",&up,&low);
    srand(time(NULL));
    for (i=0 ; i<n ; i++){
        num = (rand() % (up-low+1)) + low;
        printf("%d random number : %d\n",i+1,num );
    }
    getch();
    return 0;
}
