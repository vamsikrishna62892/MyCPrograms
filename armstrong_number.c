#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,num,n,sum=0,rem,k;
    scanf("%d",&num);
    n=num;
    for(i=0;num!=0;i++){
       num=num/10;
    }
    num = n;
    k = i;
    for(i=0;num!=0;i++){
        rem = num%10;
        sum = sum + pow(rem,k);
        num/=10;
    }
    if(sum == n){
        printf("%d is a armstrong number",n);
    }else{
        printf("%d is not a armstrong number",n);
    }
    return 0;
}
