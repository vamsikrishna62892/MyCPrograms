#include<stdio.h>
#include<conio.h>

int main(){
int n,rev=0,num;
    scanf("%d",&n);
    num = n;
    while(n>0){
    rev=(rev*10)+n%10;
    n/=10;
}
    if(num == rev){
        printf("%d is a palindrome number",rev);
    }else{
        printf("%d is not a palindrome number",num);
    }
    getch();
    return 0;
}

