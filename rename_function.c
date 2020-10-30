#include<stdio.h>

int main(){
    if( rename("vk.txt","bio.txt")==0 ){
        puts("Flie renamed successfully");
    }else{
        puts("Error occurred while renaming the function");
    }
    getch();
    return 0;
}
