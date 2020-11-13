#include<stdio.h>
#include<conio.h>

int main(){
    typedef int num;
    typedef num integer;
    integer a1=112;
    num a=10,b=15,c;
    c=a+b;
    printf("\n%d+%d=%d",a,b,c);
    printf("\n%d",a1);
getch();
return 0;
}
/*typedef is used to rename a existing data type we can define a new data type name
here we are not creating a new data type just giving a new name for existing data type
*/
