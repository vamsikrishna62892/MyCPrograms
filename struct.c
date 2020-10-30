#include<stdio.h>
struct student {
    char name[25];
    int roll;
    float marks;
    };
int main(){
    struct student v = {"vk",25,9.940000};
    printf("%s\n%d\n%.2f",v.name,v.roll,v.marks);
getch();
return 0;

}
