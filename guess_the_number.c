#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n1,n2;
    printf("Lets play a game Try to guess my number\n");
    srand(time(NULL));
    n1 = rand() % 10;
        while(1){
            printf("Enter your guess number  : ");
            scanf("%d",&n2);
            if(n1 == n2){
                printf("%d is  right\n",n2);
                break;
            }else if( n1 < n2){
                printf("%d is greater than my number \n",n2);
            }else if(n1>n2)
                printf("%d is less than my number \n",n2);
        }

    getch();
    return 0;
}
