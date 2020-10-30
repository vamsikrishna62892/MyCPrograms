#include<stdio.h>
#include<conio.h>

int add(int a, int b){
    int res=a+b;
    return res;
}


int main(){
   int x,y,res;
   printf("ENTER A AND B VALUE : ");
   scanf("%d",&x);
   scanf("%d",&y);
   add(x,y);
   res=add(x,y);
   printf("%d",res);
   getch();
   return 0;
}
