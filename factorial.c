#include<stdio.h>
#include<conio.h>

int main(){
    int x,i;
    long long int fact;
    printf("%d",sizeof(long long int));
    printf("Enter a number to get factorial : ");
    scanf("%d",&x);

    for( fact=1,i=x ; i>0 ; i--){
        fact = fact*i;
    }
    printf("Factorial of %d is %lld",x,fact);
    getch();
    return 0;
}
