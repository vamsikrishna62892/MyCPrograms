#include<stdio.h>
#include<conio.h>

int add(int a, int b){
    int res=a+b;
    printf("%d",res);
    return 0;
}


int main(){
   int x,y;
   printf("ENTER A AND B VALUE : ");
   scanf("%d",&x);
   scanf("%d",&y);
   add(x,y);
   getch();
   return 0;
}
