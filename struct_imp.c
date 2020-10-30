#include<stdio.h>

int main(){
    struct student{
        char name[25];
        int roll;
        int age;
    } amul = {"amulya",124,24} , lucky ={0};
    struct student vk = {age : 17, .name = "VAMSI" , roll : 222};
    printf("vamsi : %s %d %d\n",vk.name,vk.roll,vk.age);
    printf("amulya : %s %d %d\n",amul.name,amul.roll,amul.age);
    printf("lucky : %s %d %d\n",lucky.name,lucky.roll,lucky.age);
getch();
return 0;
}


/*".name or name : " is used to store the data when we dont know the sequence in the defined in the structure
we can also derive our variables in between thhe structure end} and ;
if we didnt given a values it assign random values in it to prevent these we need to give "vamriable name ={0}"
    */
