#include<stdio.h>
#include<conio.h>
struct sd {
    char nam[24];
    int roll,pin;
    long long int pn;
}s1;

int main(){

union d {
    char nam[24];
    int roll,pin;
    long long int pn;
}d1;

printf("Size of a integer : %d\n",sizeof(int));
printf("Size of a float : %d\n",sizeof(float));
printf("Size of a long long int : %d\n",sizeof(long long int));
printf("Size of a long : %d\n",sizeof(long));
printf("Size of a char : %d\n",sizeof(char));
printf("Size of a char with array of 10 : %d\n",sizeof(char[10]));
printf("Size of a double : %d\n",sizeof(double));
printf("Size of a structure : %d\n",sizeof(s1));
printf("Size of a union : %d",sizeof(d1));

getch();
return 0;
}
