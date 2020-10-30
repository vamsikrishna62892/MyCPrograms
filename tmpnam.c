#include<stdio.h>

int main(){
    char name[L_tmpnam+1];      // L_tmpnam is used to know the length of temporary file and  +1 is used to write null value atlast
    tmpnam(name);
    printf(name);
getch();
return 0;
}
